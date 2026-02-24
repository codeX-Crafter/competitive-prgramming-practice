#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        // vector<int> v(n + 1);
        // for (int i = 1; i <= n; i++)
        // {
        //     cin >> v[i];
        // }
        // for (int i = 1; i <= n / 2; i++)
        // {
        //     if (2 * i < n && v[2 * i] < v[i])
        //     {
        //         // swap(v[i], v[2 * i]);
        //         int a = v[i];
        //         v[i] = v[2 * i];
        //         v[2 * i] = a;
        //     }
        // }
        // // for (int i = 1; i <= n; i++)
        // // {
        // //     cout << v[i] << " ";
        // // }
        // // cout << endl;
        // bool poss = true;
        // for (int i = 2; i <= n; i++)
        // {
        //     if (v[i] < v[i - 1])
        //         poss = false;
        // }

        // if (poss)
        // {
        //     cout << "YES\n";
        // }
        // else
        // {
        //     cout << "NO\n";
        // }
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];
        b = a;
        sort(b.begin() + 1, b.end());

        bool ok = true;

        vector<int> vis(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
                continue;

            vector<int> orig, sortedv;
            for (int j = i; j <= n; j *= 2)
            {
                vis[j] = 1;
                orig.push_back(a[j]);
                sortedv.push_back(b[j]);
            }

            sort(orig.begin(), orig.end());
            sort(sortedv.begin(), sortedv.end());

            if (orig != sortedv)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}