#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x >= 67)
        {
            cout << x << endl;
        }
        else
            cout << x + 1 << endl;
    }
    return 0;
}