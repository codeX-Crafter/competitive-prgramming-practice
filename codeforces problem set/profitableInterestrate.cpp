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
        int ans = 0;
        if (a >= b)
        {
            ans = a;
        }
        else
        {
            if (2 * a >= b)
            {
                ans = ((2 * a) - b);
            }
            else
            {
                ans = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}