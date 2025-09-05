#include <bits/stdc++.h>
using namespace std;
#define int long long
// Print the number of ways modulo 10^9+7.
int z = 1e9 + 7;
#define MOD z

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