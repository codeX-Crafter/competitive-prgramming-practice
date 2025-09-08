#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        int sec = m;
        sort(v.begin(), v.end());
        for (int i = n - 1; i >= 0; i--)
        {
            ans += (v[i] * sec);
            sec--;
            if (sec == 0)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}