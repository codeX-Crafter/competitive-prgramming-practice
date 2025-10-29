#include <bits/stdc++.h>
using namespace std;
#define int long long

// Test case to explain
// 5
// 5 1
// 5 2
// 5 3
// 5 4
// 5 5

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        if (n % 2 == 0)
        {
            if (k <= n)
            {
                ans = k;
            }
            else
            {
                ans = k % n;
                if (ans == 0)
                {
                    ans = n;
                }
            }
        }
        else
        {
            int rep = n / 2;
            int repCount = 0;
            if (k <= rep)
            {
                ans = k;
            }
            else
            {
                repCount = (k - 1) / rep;
                // if (rep == 1)
                //     repCount--;
                k += repCount;
            }
            if (k <= n)
            {
                ans = k;
            }
            else
            {
                ans = k % n;
                if (ans == 0)
                {
                    ans = n;
                }
            }
            // cout << "k " << k << endl;
            // cout << "repCount " << repCount << endl;
            // cout << "rep " << rep << endl;
        }
        cout << ans << endl;
    }
    return 0;
}