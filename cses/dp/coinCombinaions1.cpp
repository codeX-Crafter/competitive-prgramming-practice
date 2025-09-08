#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

// state - dp[i] is the no of ways to get the sum i using give coins
// transiton would be dp[i]= sum of dp[i-v[k]] where k varies from 0 to n-1
// final subproblem is dp[x]

// int rec(int sum, int n, vector<int> &v, vector<int> &dp)
// {
//     if (sum == 0)
//     {
//         return 1;
//     }
//     if (dp[sum] != -1)
//         return dp[sum];
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (sum - v[i] >= 0)
//             ans += (rec((sum - v[i]), n, v, dp));
//         ans %= MOD;
//     }
//     return dp[sum] = ans;
// }

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    vector<int> dp(x + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - v[j] >= 0)
            {
                dp[i] += dp[i - v[j]];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[x] << endl;
    return 0;
}