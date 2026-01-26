#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> s(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            s[i] = s[i - 1] + b[i - 1];
        }
        sort(a.begin(), a.end());

        vector<pair<int, int>> vals;
        int i = n - 1;
        while (i >= 0)
        {
            int st = a[i];
            int cnt = 0;
            while (i >= 0 && a[i] == st)
            {
                cnt++;
                i--;
            }
            vals.push_back({st, cnt});
        }
        int total = 0;
        int k = 0;
        int ans = 0;
        for (int i = 0; i < vals.size(); i++)
        {
            int st = vals[i].first;
            int cnt = vals[i].second;
            total += cnt;
            while (k < n && s[k + 1] <= total)
            {
                k++;
            }
            ans = max(ans, st * k);
        }
        cout << ans << endl;
    }
    return 0;
}