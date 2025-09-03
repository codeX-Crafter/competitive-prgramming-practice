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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int ans = v[1];
        for (int i = 2; i <= n; i++)
        {
            ans = (ans & v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}