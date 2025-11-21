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
        vector<int> a(n);
        vector<int> b(n);
        vector<int> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            s[i] = a[i] ^ b[i];
            XOR ^= s[i];
        }

        if (XOR == 0)
        {
            cout << "Tie\n";
            continue;
        }

        int k = 63 - __builtin_clzll(XOR);
        int last = -1;

        for (int i = 0; i < n; i++)
        {
            if ((s[i] >> k) & 1)
            {
                last = i + 1;
            }
        }

        if (last % 2 == 1)
        {
            cout << "Ajisai\n";
        }
        else
        {
            cout << "Mai\n";
        }
    }
    return 0;
}
