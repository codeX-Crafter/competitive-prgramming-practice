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
        int ans = 0;
        while (n % 6 == 0)
        {
            n /= 6;
            ans++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            ans += 2;
        }
        if (n == 1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}