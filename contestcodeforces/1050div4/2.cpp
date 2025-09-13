#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        int rem = (m - v[n - 1].first);
        int pos = 0;
        int ans = 0;
        int second = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].second == pos)
            {
                int diff = (v[i].first - second);
                if (diff % 2 == 0)
                {
                    ans += diff;
                }
                else
                {
                    ans += (diff - 1);
                }
                second = v[i].first;
                // cout << "diff " << diff << endl;
            }
            else
            {
                ans++;
                pos = v[i].second;
                // int k = (v[i].first - second - 1) / 2;
                // cout << "k " << k << endl;
                // ans += k;
                int diff = (v[i].first - second - 1);
                if (diff % 2 == 0)
                {
                    ans += diff;
                }
                else
                {
                    ans += (diff - 1);
                }

                second = v[i].first;
                // cout << "diff " << diff << endl;
            }
            // cout << "ans " << ans << endl;
        }

        cout << ans + rem << endl;
    }
    return 0;
}
