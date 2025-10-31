#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, x, d, n;
        cin >> r >> x >> d >> n;
        string s;
        cin >> s;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2' && r >= x)
            {
                continue;
            }
            else
            {
                ans++;
                r -= d;
            }
        }
        cout << ans << endl;
    }
    return 0;
}