#include <bits/stdc++.h>
using namespace std;
#define int long long

// I apologise for calling the editorial code sus in my previous submission

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // cout << ceil((n * 1.00) / k) << endl;  // the approach you come up with when you misread the question lol , so sleepy atm but i have another 2.5 hrs to pull best of luck to me lol
        int ans = n;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i <= k)
                {
                    ans = min(ans, (n / i));
                }
                if ((n / i) <= k)
                {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}