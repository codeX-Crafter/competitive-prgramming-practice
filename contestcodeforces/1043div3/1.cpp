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
        string a, b, c;
        cin >> n >> a >> m >> b >> c;
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'V')
            {
                a.insert(0, 1, b[i]);
            }
            else if (c[i] == 'D')
            {
                a.push_back(b[i]);
            }
        }
        cout << a << endl;
    }
    return 0;
}