#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        vector<int> temp;
        for (int i = 1; i < n; i++)
        {
            temp.push_back(v[i] - v[i - 1] - 1); // this -1 is what I did not do and hence took more time
        }
        sort(temp.begin(), temp.end());

        // for (int i = 0; i < n - 1; i++)
        //     cout << temp[i] << " ";
        // cout << endl;

        int ans = n;
        if (n > k)
        {
            for (int i = 0; i < (n - k); i++)
            {
                ans += temp[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
