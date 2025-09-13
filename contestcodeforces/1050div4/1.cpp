#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> x >> n;
        if (n % 2 == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << x << endl;
        }
    }
    return 0;
}
