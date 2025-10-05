#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n;
        vector<int> v(n);
        vector<int> piles(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            piles[i] = sum;
        }
        cin >> m;
        vector<int> juicy(m);
        for (int i = 0; i < m; i++)
        {
            cin >> juicy[i];
        }
        for (int i = 0; i < m; i++)
        {
            int ans = lower_bound(piles.begin(), piles.end(), juicy[i]) - piles.begin();
            cout << (ans + 1) << endl;
        }
    }
    return 0;
}