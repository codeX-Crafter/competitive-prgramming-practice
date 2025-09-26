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
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == -1)
            {
                one++;
            }
            if (v[i] == 0)
            {
                zero++;
            }
        }
        int ans = zero;
        if (one % 2 != 0)
        {
            ans += 2;
        }
        cout << ans << endl;
    }
    return 0;
}