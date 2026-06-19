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
        string s;
        cin >> s;
        vector<int> cnt(k, 0);
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cnt[i % k]++;
        }
        for (int i = 0; i < k; i++)
        {
            if (cnt[i] % 2)
                ans = false;
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
