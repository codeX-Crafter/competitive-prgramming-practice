#include <bits/stdc++.h>
using namespace std;

// we are given an array of heights where height[i] represent height of i+1 th stair
// if the frog is at ith index it can jump from i to either i+1 or i+2
// the energy consumed in going to i to j is abs(height[j] - height[i])
// minimum energy consumed to reach the nth stair

// int recur(int index, vector<int> &height, vector<int> &dp)
// {
//     if (index == 0)
//         return 0;
//     if (dp[index] != -1)
//         return dp[index];

//     int rs = INT_MAX;

//     int fs = recur(index - 1, height, dp) + abs(height[index] - height[index - 1]);
//     if (index > 1)
//         rs = recur(index - 2, height, dp) + abs(height[index] - height[index - 2]);

//     return dp[index] = min(fs, rs);
// }

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    if (n == 1) // only one stair
    {
        cout << 0 << endl;
        return 0;
    }

    // vector<int> dp(n, -1);
    int prev2 = 0;
    int prev1 = abs(height[1] - height[0]);
    int curr = INT_MAX;

    for (int i = 2; i < n; i++)
    {

        curr = min(prev1 + abs(height[i] - height[i - 1]), prev2 + abs(height[i] - height[i - 2]));
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl;

    return 0;
}
