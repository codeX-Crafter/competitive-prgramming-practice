#include <bits/stdc++.h>
using namespace std;
#define int long long

// mtlb isme sort of we have to maximise the min distance between teleports and friends

// upsolve krugi abhi kuch dinn m

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n);
        vector<int> teleports(k + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int xi = x + 1;
        if (n + k > x + 1)
        {
            for (int i = 0; i < k; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }

        sort(v.begin(), v.end());
        vector<int> dist;
        for (int i = 0; i < n - 1; i++)
        {
            dist.push_back(v[i + 1] - v[i]);
        }
        sort(dist.begin(), dist.end());
        int ss = dist.size();
        if (dist[ss - 1] < k)
        {
            for (int i = 0; i < k; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
        }
    }
    return 0;
}