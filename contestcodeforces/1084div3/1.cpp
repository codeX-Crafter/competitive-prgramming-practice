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
            cin >> v[i];

        int mx = *max_element(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}