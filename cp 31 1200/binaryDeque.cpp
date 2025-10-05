#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, req;
        cin >> n >> req;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        unordered_map<int, int> m;
        int sum = 0, ans = 0;
        m[0] = -1;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (m.count(sum - req))
                ans = max(ans, i - m[sum - req]);
            if (!m.count(sum))
                m[sum] = i;
        }
        if (ans == 0)
            cout << "-1\n";
        else
            cout << n - ans << "\n";
    }
}
