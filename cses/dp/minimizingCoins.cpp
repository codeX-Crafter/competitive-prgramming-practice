#include <bits/stdc++.h>
using namespace std;
#define int long long

int rec(int sum, int n, vector<int> &v, vector<int> &dp)
{
    if (sum < 0)
        return 1e18;
    if (sum == 0)
        return 0;

    if (dp[sum] != -1)
        return dp[sum];
    int mini = 1e18;
    for (int i = 0; i < n; i++)
    {
        int call = rec(sum - v[i], n, v, dp);
        if (call != 1e18)
            mini = min(mini, (1 + call));
    }
    return dp[sum] = mini;
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        vector<int> dp(x + 1, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = rec(x, n, v, dp);
        if (ans == 1e18)
        {
            cout << "-1\n";
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}