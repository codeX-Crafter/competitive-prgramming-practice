#include <bits/stdc++.h>
using namespace std;

// int recurr(int n, vector<int> &height, int k, vector<int> &dp)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     if (dp[n] != -1)
//         return dp[n];

//     int mini = INT_MAX;
//     for (int i = 1; i <= k; i++)
//     {
//         if (n - i < 0)
//             break;
//         int jump = recurr(n - i, height, k, dp) + abs(height[n] - height[n - i]);
//         mini = min(mini, jump);
//     }

//     return dp[n] = mini;
// }

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    vector<int> dp(n, -1);

    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int minSteps = INT_MAX;

        for (int j = 1; j <= k; j++)
        {
            if (i - j < 0)
                break;
            int jump = dp[i - j] + abs(height[i] - height[i - j]);
            minSteps = min(minSteps, jump);
        }
        dp[i] = minSteps;
    }

    cout << dp[n - 1] << endl;
    return 0;
}