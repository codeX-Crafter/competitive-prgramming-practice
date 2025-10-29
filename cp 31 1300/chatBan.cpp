#include <bits/stdc++.h>
using namespace std;
#define int long long

int sumFirstN(int x)
{
    return x * 1ll * (x + 1) / 2;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        long long x;
        cin >> k >> x;
        long long l = 1, r = 2 * k - 1;
        long long res = 2 * k - 1;
        bool over = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (mid >= k)
            {
                over = (sumFirstN(k) + sumFirstN(k - 1) - sumFirstN(2 * k - 1 - mid) >= x);
            }
            else
            {
                over = (sumFirstN(mid) >= x);
            }
            if (over)
            {
                res = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
