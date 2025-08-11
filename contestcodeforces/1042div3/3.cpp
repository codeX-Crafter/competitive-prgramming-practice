#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<int> S;
        // vector<int> a(n);
        // vector<int> b(n);
        multiset<int> T;
        bool possible = true;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // S.insert(x);
            S.insert(x);

            // if (x < k)
            //     possible = false;
            // if (x % k == 0 || x == 0)
            // {
            //     x = 0;
            // }
            // else
            // {
            //     x = k - (x % k);
            // }
            // sum1 += x;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // if (x < k)
            //     possible = false;

            x = x % k;

            T.insert(x);

            // sum2 += x;
        }

        for (auto it : S)
        {
            // int val = it % k;
            auto hi = T.find(it);
            auto lol = T.find(it);
            // auto lol=it;

            if (it % k == 0)
            {
                lol = T.find(0);
            }
            else
            {
                lol = T.find(k - (it % k));
            }
            if (hi != T.end())
            {
                T.erase(hi);
            }
            else if (lol != T.end())
            {
                T.erase(lol);
            }
            else
            {
                possible = false;
                break;
            }
        }

        // int sum = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        //     sum += a[i];
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> b[i];
        //     sum += b[i];
        // }
        // if (S == T && possible)
        if (T.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}