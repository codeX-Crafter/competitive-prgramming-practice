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
        vector<int> a(n);
        vector<int> prea(n + 1);
        vector<int> b(n);
        vector<int> preb(n + 1);
        // vector<int> beforeA(n + 1);
        // vector<int> beforeB(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            prea[a[i]] = i + 1;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            preb[b[i]] = i + 1;
            // cout << preb[b[i]] << " ";
        }

        int ans1 = 0;
        int ans2 = 0;
        int ans3 = 0;
        int yo = 0;
        int yosh = 0;
        for (int i = 1; i <= n; i++)
        {
            cout << prea[i] - preb[i] << endl;
            // yo += (prea[i] - preb[i]);
            // if (yo <= 0)
            // {
            //     yosh = max(yosh, (prea[i] - preb[i]));
            //     if (yo == 0)
            //     {
            //         ans1 = yosh;
            //     }
            // }
            // ans2 = min(ans2, (prea[i] - preb[i]));
            if (((prea[i] - preb[i])) > 0)
            {
                ans1++;
            }
        }

        cout << ans1 << endl;
        // cout << abs(ans2) << endl;
        // cout << max(ans1, abs(ans2)) << endl;
    }
    return 0;
}