#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
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
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                ans = ans + (v[i - 1] - v[i]);
                v[i] = v[i] + (v[i - 1] - v[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}