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
        vector<int> v(n);
        vector<int> p(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> p[i];
        }
        sort(v.begin(), v.end());
        int z = 0;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            // cout << "hi " << p[z] << endl;
            // cout << v[i] << endl;
            // cout << "yo " << p[v[i]] << endl;

            if (p[z] < p[v[i]-1])
            {
                ans += p[z];
                z++;
            }
            else
            {
                ans += p[v[i]-1];
            }
            // cout << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}