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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int gcd = 0;
        for (int i = 1; i <= n; i++)
        {
            gcd = __gcd(gcd, abs(v[i] - v[n - i + 1]));
            // if (abs(v[i] - v[n - i + 1]) == 0)
            // {
            //     gcd = 0;
            // }
        }

        cout << gcd << endl;
    }
    return 0;
}