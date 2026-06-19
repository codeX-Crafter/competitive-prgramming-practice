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
        int mini = LLONG_MAX;
        int maxi = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mini = min(mini, v[i]);
            maxi = max(maxi, v[i]);
        }
        int ans = maxi - mini + 1;
        cout << ans << endl;
    }
    return 0;
}
