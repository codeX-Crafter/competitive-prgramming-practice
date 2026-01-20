#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> opt(n, 0);
        vector<int> ver(n, 0);
        int total = 0;

        for (int i = 0; i < m; i++)
        {
            int b, c;
            cin >> b >> c;
            b--;

            if (ver[b] != total)
            {
                opt[b] = 0;
                ver[b] = total;
            }
            int neww = v[b] + opt[b] + c;
            if (neww > h)
            {
                total++;
            }
            else
            {
                opt[b] += c;
                ver[b] = total;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (ver[i] == total)
            {
                cout << v[i] + opt[i] << " ";
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}