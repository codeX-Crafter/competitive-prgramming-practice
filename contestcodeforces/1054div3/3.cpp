#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        // int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // maxi = max(maxi, v[i]);
        }
        vector<int> hash(n + 1);
        for (int i = 0; i < n; i++)
        {
            hash[v[i]]++;
        }
        // for (int i = 0; i < maxi + 1; i++)
        // {
        //     cout << hash[i] << " ";
        // }
        // cout << endl;
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (hash[i] == 0)
            {
                ans++;
            }
        }
        // ans = hash[k] - ans;
        // int pri = ans + hash[k];
        // if (ans <= hash[k])
        // {
        //     pri = hash[k];
        // }
        // ans += hash[k];
        ans = max(ans, hash[k]);

        cout << ans << endl;
    }
    return 0;
}