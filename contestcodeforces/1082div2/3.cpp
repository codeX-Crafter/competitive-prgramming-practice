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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= r && v[i] >= l)
            {
                r = v[i] + 1;
            }
            else
            {
                ans++;
                l = r = v[i] + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}