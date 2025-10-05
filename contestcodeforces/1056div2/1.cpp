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
        int w = n;
        int l = 0;
        int ans = 0;
        while (w != 1 || l != 1)
        {
            ans += ((w) / 2);
            ans += ((l) / 2);
            l -= (l / 2);
            // cout << "l " << l << " " << "w " << w << endl;

            l += (w / 2);
            // w = ((w + 1) / 2);
            w -= (w / 2);

            // cout << ans << endl;

            // cout << "w " << w << " " << "l " << l << endl;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
