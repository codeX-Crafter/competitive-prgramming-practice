#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int mexi = 0;

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mexi)
            {
                mexi++;
            }
            else if (v[i] > mexi)
            {
                break;
            }
        }
        int ans = min(mexi, k - 1);
        cout << ans << endl;
    }
    return 0;
}