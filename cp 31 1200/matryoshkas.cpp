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

        map<int, int> hash;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            hash[x]++;
            if (hash.find(x + 1) == hash.end())
            {
                hash[x + 1] = 0;
            }
        }

        int prev = 0;
        int ans = 0;
        for (auto it : hash)
        {
            // cout << it.first << " " << it.second;
            // cout << endl;
            int zero = 0;
            ans += max(zero, it.second - prev);
            prev = it.second;
        }
        cout << ans << endl;
    }
    return 0;
}