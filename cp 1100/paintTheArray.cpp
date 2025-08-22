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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int gcdOdd = 0;
        int gcdEven = 0;

        for (int i = 0; i < n; i += 2)
        {
            gcdEven = __gcd(gcdEven, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            gcdOdd = __gcd(gcdOdd, v[i]);
        }
        int ans = 0;
        // cout << "odd " << gcdOdd << endl;
        // cout << "even " << gcdEven << endl;

        bool even = true;
        bool odd = true;

        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % gcdOdd == 0)
            {
                ans = 0;
                even = false;
                break;
            }
        }

        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % gcdEven == 0)
            {
                ans = 0;
                odd = false;
                break;
            }
        }

        if (odd && even)
        {
            cout << max(gcdEven, gcdOdd) << endl;
        }
        else if (even)
        {
            cout << gcdOdd << endl;
        }
        else if (odd)
        {
            cout << gcdEven << endl;
        }
        else
        {
            cout << 0 << endl;
        }

        // cout << ans << endl;
    }
    return 0;
}