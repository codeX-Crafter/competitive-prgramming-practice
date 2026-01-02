#include <bits/stdc++.h>
using namespace std;
#define int long long

// literally int overflow ke kaaran midfications jo lgti h ll m uss reason se 5 WAs aaye h

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int zero = 0;
        int suff = accumulate(v.begin(), v.end(), zero);
        int pre = 0;
        // int ans = LLONG_MIN; // bhai yaad rakh kr long long define kr deti h pehle PLEASE
        int ans = (-1e18);
        for (int i = 0; i < n; i++)
        {
            // cout << pre << " " << suff << endl;

            suff -= v[i];
            ans = max(ans, pre - suff);
            // cout << ans << endl;

            if (i == 0)
                pre += v[i];
            else
                pre = max(pre + v[i], pre - v[i]);
        }
        cout << ans << endl;
        // cout << endl;
    }
    return 0;
}
