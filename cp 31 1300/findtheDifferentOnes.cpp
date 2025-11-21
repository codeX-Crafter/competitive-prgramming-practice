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
        v[1].second = -1;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i].first;
            if (i > 1)
            {
                if (v[i].first == v[i - 1].first)
                {
                    v[i].second = v[i - 1].second;
                }
                else
                {
                    v[i].second = i - 1;
                }
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (v[l].second == v[r].second)
            {
                cout << "-1 -1\n";
            }
            else
            {
                cout << v[r].second << " " << r << endl;
            }
        }
        cout << endl;
    }
    return 0;
}