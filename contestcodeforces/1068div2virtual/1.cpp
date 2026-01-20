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

        vector<bool> hash(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                for (int j = i;( j <= (i + k) && j < n); j++)
                {
                    hash[j] = 1;
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            // cout << hash[i] << " ";
            if (!hash[i])
            {
                ans++;
            }
        }
        // cout << endl;

        cout << ans << endl;
    }
    return 0;
}