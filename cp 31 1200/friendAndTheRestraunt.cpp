#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return (a.second - a.first) < (b.second - b.first);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> x(n);
        vector<int> y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x[i].second;
        }
        sort(x.begin(), x.end(), cmp);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << x[i].first << " " << x[i].second << endl;
        // }
        // cout << endl;
        int sum = 0;
        int l = 0;
        int r = n - 1;
        for (int i = 0; i < n; i++)
        {
            sum += (x[i].second - x[i].first);
        }
        while (sum < 0)
        {
            sum -= (x[l].second - x[l].first);
            l++;
        }
        int ans = 0;
        int suml = 0;
        int sumr = 0;
        // cout << l << endl;
        while (l < r)
        {
            // if (suml == 0)

            suml += (x[l].second - x[l].first);
            if (sumr == 0)
                sumr += (x[r].second - x[r].first);
            // cout << endl;
            // cout << suml << endl;
            // cout << sumr << endl;
            // cout << endl;

            if (suml + sumr >= 0)
            {
                ans++;
                l++;
                r--;
                suml = 0;
                sumr = 0;
            }
            else
            {
                // r--;
                l++;
                suml = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}