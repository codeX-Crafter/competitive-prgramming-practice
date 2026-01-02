#include <bits/stdc++.h>
using namespace std;
#define int long long
// Print the number of ways modulo 10^9+7.
int z = 1e9 + 7;
#define MOD z

// State - dp[k] is no of ways to get sum k
// Transition - dp[k] = sumation of dp[k-i] where i varies from 1 t0 6
// Base case - dp[0] is 1 kyunki no dice rolls req to construct sum 0
// Final Problem - dp[n]

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> dp(n + 1);

        // base case
        dp[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if (j <= i)
                    // transition
                    dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}