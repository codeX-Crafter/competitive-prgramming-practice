#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;
        int ans = 0;
        int x = (d / m) + 1;
        // cout << x << endl;

        ans = ceil((n*1.0) / x);
        // if (d < m)
        // {
        //     ans = n;
        // }
        cout << ans << endl;
    }
    return 0;
}