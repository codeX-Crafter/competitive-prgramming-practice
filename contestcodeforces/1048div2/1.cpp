#include <bits/stdc++.h>
using namespace std;
#define int long long

int lcm(int &a, int &b)
{
    return ((a * b) / __gcd(a, b));
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if (a == b)
        {
            ans = 0;
        }
        else
        {
            if (lcm(a, b) == a || lcm(a, b) == b)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
        }
        // cout << "lcm " << lcm(a, b) << endl;
        cout << ans << endl;
    }
    return 0;
}