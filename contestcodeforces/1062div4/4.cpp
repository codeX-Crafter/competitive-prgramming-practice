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
        vector<int> v(n);
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 != 0)
                odd++;
        }
        sort(v.begin(), v.end());
        int ans = -1;

        int target = 0;
        for (int i = 0; i < n; i++)
        {
            target = __gcd(target, v[i]);
        }

        if (target % 2 != 0)
        {
            ans = 2;
        }
        else
        {
            for (int i = 3; i <= target + 1; i += 2)
            {
                if (i > 1e18)
                {
                    break;
                }
                if (__gcd(i, target) == 1)
                {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}