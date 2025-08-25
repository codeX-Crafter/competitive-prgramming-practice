#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first > b.first;
}
signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        vector<pair<int, int>> b(n);
        vector<pair<int, int>> c(n);
        for (int i = 0; i < n; i++)
        {
            a[i].second = i;
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            b[i].second = i;
            cin >> b[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            c[i].second = i;
            cin >> c[i].first;
        }
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end(), cmp);
        sort(c.begin(), c.end(), cmp);

        int ans = 0;
        int maxAns = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    ans = a[i].first + b[j].first + c[k].first;
                    if (a[i].second != b[j].second && (a[i].second != c[k].second && b[j].second != c[k].second))
                    {
                        maxAns = max(maxAns, ans);
                    }
                }
            }
        }
        cout << maxAns << endl;
    }
    return 0;
}