#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // basically approach h ki store values in map like the key is the the elemant and value is the index and then sort it in descending order if possible
        vector<pair<int, int>> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[i] = {i, x};
        }
        vector<pair<int, int>> h = v;
        sort(h.begin() + 1, h.end(), cmp);
        vector<int> ans(n + 1);
        ans[0] = 0;
        int val = 1;
        int valno = 2;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                ans[h[i].first] = val;
                valno--;
            }
            else
            {
                ans[h[i].first] = -(val);
                valno--;
            }
            if (valno == 0)
            {
                valno = 2;
                val++;
            }
        }
        long long minTime = 0;
        for (int i = 1; i <= n; i++)
        {
            minTime += (2 * (v[i].second) * (abs(ans[i])));
        }
        cout << minTime << endl;
        for (int i = 0; i < n + 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}