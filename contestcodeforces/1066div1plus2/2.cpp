#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        x = llabs(x);
        y = llabs(y);

        int cnt4 = 0;
        int cnt8 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '4')
            {
                cnt4++;
            }
            else
            {
                cnt8++;
            }
        }

        if (cnt4 + cnt8 >= max(x, y) && cnt4 + (2 * cnt8) >= x + y)
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