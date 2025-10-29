#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n + 1);
        // vector<int> hash(10e6);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
            v[i].first = v[i].first - i;
        }

        sort(v.begin() + 1, v.end());
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << v[i].first << " " << v[i].second << "  ";
        // }
        // cout << endl;
        int ele = v[1].first;
        int same = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v[i].first == ele)
            {
                same++;
            }
            if (v[i].first != ele || i == n)
            {
                same--;
                ans = ans + (((same + 1) * same) / 2);
                ele = v[i].first;
                same = 1;
            }
            // cout << ans << endl;
        }

        cout << ans << endl;
        // cout << endl;
    }
    return 0;
}