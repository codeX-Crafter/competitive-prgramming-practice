#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mpp;
        vector<int> c(n + 1);
        vector<int> b(n);
        vector<int> d(n + 1);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mpp[x] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            c[mpp[b[i]]] = i;
        }
        int ans = 0;
        int maxi = INT_MIN;

        for (int i = 1; i < n + 1; i++)
        {
            // cout << c[i] << " ";
            if (c[i] < maxi)
            {
                ans++;
            }
            maxi = max(maxi, c[i]);
        }
        // cout << endl;
        cout << ans << endl;
    }
    return 0;
}