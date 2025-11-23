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
        vector<int> v(n);
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mpp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (auto it : mpp)
        {
            // cout << it.first << " " << it.second << endl;
            if (it.first > it.second)
            {
                ans += it.second;
            }
            else if (it.first < it.second)
            {
                ans += (it.second - it.first);
            }
        }
        cout << ans << endl;
    }
    return 0;
}