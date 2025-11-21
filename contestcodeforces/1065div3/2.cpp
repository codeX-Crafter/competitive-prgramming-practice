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
        vector<int> b(n - 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = v[0];
        int r = v[n - 1];
        if (l == -1 && r == -1)
        {
            l = 0;
            r = 0;
            v[0] = 0;
            v[n - 1] = 0;
        }
        else if (l == -1)
        {
            l = r;
            v[0] = l;
        }
        else if (r == -1)
        {
            r = l;
            v[n - 1] = r;
        }
        int ans = llabs(r - l);

        cout << ans << endl;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
            {
                v[i] = 0;
            }
            cout << v[i] << " ";
        }
        cout << endl;

        // cout << sum << endl;
    }
    return 0;
}