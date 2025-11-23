#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> c(q);
        vector<int> l(q);
        vector<int> r(q);
        vector<int> ans(n + 1, -1);
        vector<bool> help(n + 1);
        vector<bool> help2(n + 1);
        for (int i = 0; i < q; i++)
        {
            cin >> c[i] >> l[i] >> r[i];
            if (c[i] == 1)
                for (int j = l[i]; j <= r[i]; j++)
                {
                    // if (ans[j] != (k + 1))
                    //     ans[j] = k;
                    help[j] = 1;
                }

            if (c[i] == 2)
                for (int j = l[i]; j <= r[i]; j++)
                {
                    // if (ans[j] == k)
                    //     ans[j] = k + 1;
                    // else
                    // {
                    //     ans[j] = 0;
                    // }
                    help2[j] = 1;
                }
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (help[i] && help2[i])
            {
                ans[i] = k + 1;
                help[i] = 0;
                help2[i] = 0;
            }
            else if (help[i])
            {
                ans[i] = k;
                help[i] = 0;
            }
        }

        // for (int i = 1; i < n + 1; i++)
        // {
        //     cout << ans[i] << " ";
        // }
        // cout << endl;

        int yo = 1;
        int i = 0;
        while (yo <= n)
        {
            if (help2[yo])
            {
                // cout << ans[yo] << " ";

                ans[yo] = i % k;
                // cout << ans[yo] << endl;

                i++;
            }
            yo++;
        }

        for (int i = 1; i < n + 1; i++)
        {
            if (ans[i] == -1)
                ans[i] = 0;
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}