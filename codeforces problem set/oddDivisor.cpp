#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPowerOf2(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((isPowerOf2(n)))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}