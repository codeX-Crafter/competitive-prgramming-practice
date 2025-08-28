#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        c = c - a;
        d = d - b;
        int x = min(a, b);
        int y = min(c, d);
        int e = max(a, b);
        int f = max(c, d);

        // int z = a + c;
        // int q = b + d;
        if ((e / 2) + (e % 2) - 1 <= x && (f / 2) + (f % 2) - 1 <= y)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
