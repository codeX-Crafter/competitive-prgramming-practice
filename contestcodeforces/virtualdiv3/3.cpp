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
        int lenA = __builtin_clzll(1) - __builtin_clzll(a);
        int lenB = __builtin_clzll(1) - __builtin_clzll(b);
        if (lenA < lenB)
        {
            cout << "-1\n";
        }
        else if (lenA == lenB)
        {
            cout << "1\n";
            cout << (a ^ b) << "\n";
        }
        else
        {
            cout << 2 << endl
                 << (a ^ b ^ (1LL << lenA))
                 << endl
                 << (1LL << lenA)
                 << endl;
        }
    }
    return 0;
}