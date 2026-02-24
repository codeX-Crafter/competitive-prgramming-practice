#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (!a && b)
        {
            if (b % 2 != 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else if (b % 2 != 0 && a < 2)
        {
            cout << "NO\n";
        }
        else
        {
            int ans = a + (2 * b);
            if (ans % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}