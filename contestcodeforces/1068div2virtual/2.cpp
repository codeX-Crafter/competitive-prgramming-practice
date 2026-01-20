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

        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int maxi = 0;
        int mini = 0;
        for (int i = 0; i < n; i++)
        {
            int mx = max(maxi - a[i], b[i] - mini);
            int mn = min(mini - a[i], b[i] - maxi);
            maxi = mx;
            mini = mn;
        }
        cout << maxi << endl;
        // cout << endl;
    }
    return 0;
}
