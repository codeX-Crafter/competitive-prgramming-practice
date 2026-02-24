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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        // for (int i = 1; i < n - 1; i++)
        // {
        //     if (v[i - 1] == 7 - v[i] || v[i - 1] == v[i])
        //     {
        //         ans++;
        //     }
        //     if (v[i + 1] == 7 - v[i] || v[i + 1] == v[i])
        //     {
        //         ans++;
        //     }
        // }
        int i = 1;
        while (i < n)
        {
            if (v[i - 1] == 7 - v[i] || v[i - 1] == v[i])
            {
                ans++;
                if (i < n - 1)
                    if (v[i + 1] == 7 - v[i] || v[i + 1] == v[i])
                    {
                        ans--;
                    }
            }
            cout << ans << endl;

            i++;
        }
        cout << ans << endl;
    }
    return 0;
}