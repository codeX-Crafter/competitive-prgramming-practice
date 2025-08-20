#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n + 1);
        bool possible = true;
        for (int i = 1; i <= n; i++)
        {
            if (l % i == 0)
            {
                v[i] = l;
            }
            else if ((l - (l % i)) + i <= r)
            {
                v[i] = ((l - (l % i)) + i);
            }
            else
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << "YES\n";
            for (int i = 1; i <= n; i++)
            {
                cout << v[i] << " ";
                // cout << __gcd(v[i], i) << " ";
            }
            cout << endl;
            // for (int i = 1; i <= n; i++)
            // {
            //     // cout << v[i] << " ";
            //     cout << __gcd(v[i], i) << " ";
            // }
            // cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}