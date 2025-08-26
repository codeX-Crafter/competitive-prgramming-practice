#include <bits/stdc++.h>
using namespace std;

// we are given an array of heights whe height[i] represent height of i+1 th stair
// if the frog is at ith index it can jump from i to either i+1 or i+2
// the energy consumed in going to i to j is abs(height[j] - height[i])

int recur(int index, vector<int> &height)
{
    if (index == 0)
        return 0;

    int rs = INT_MAX;

    int fs = recur(index - 1, height) + abs(height[index] - height[index - 1]);
    if (index > 1)
        rs = recur(index - 2, height) + abs(height[index] - height[index - 2]);

    return min(fs, rs);
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    cout << recur(n, height) << endl;

    return 0;
}