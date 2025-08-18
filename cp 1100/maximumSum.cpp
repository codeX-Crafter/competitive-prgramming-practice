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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + v[i];
        }

        int total = prefix[n];
        int ans = 0;

        for (int i = 0; i <= k; i++)
        {
            int l = 2 * i;
            int r = n - (k - i);
            if (l <= r)
            {
                int sum = prefix[r] - prefix[l];
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }
}
