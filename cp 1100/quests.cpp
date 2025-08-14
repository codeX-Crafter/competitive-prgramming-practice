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
        vector<pair<int, int>> v(n);
        int maxi1 = INT_MIN;
        int maxi2 = INT_MIN;
        int indexM = 0;
        int indexM2 = 0;
        int sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x >= maxi1)
            {
                maxi1 = max(maxi1, x);
                indexM = i;
            }
            sum1 += x;
            v[i].first = sum1;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= maxi2)
            {
                // maxi1 = max(maxi1, v[i].first);
                indexM2 = i;
            }
            maxi2 = max(maxi2, x);

            v[i].second = maxi2;
        }
        int indexMAX = 0;
        if (maxi1 >= maxi2)
        {
            indexMAX = indexM;
        }
        else
        {
            indexMAX = indexM2;
        }
        int ans = INT_MIN;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i].first << " ";
        // }
        // cout << endl;
        for (int i = 0; (i < n && i < k); i++)
        {
            // if()
            int haha = v[i].first + (v[i].second * (k - i - 1));
            // cout << haha << endl;
            ans = max(ans, haha);
        }
        cout << ans << endl;
    }
    return 0;
}