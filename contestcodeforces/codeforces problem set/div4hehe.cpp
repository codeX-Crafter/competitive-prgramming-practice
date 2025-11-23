#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3;
        vector<int> v(n);
        vector<int> hash(11, 0);
        int ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            hash[v[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (hash[v[i]] == 1)
            {
                ans = v[i];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}