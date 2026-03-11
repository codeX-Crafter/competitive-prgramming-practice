#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int g, int h)
{
    return g > h;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(n);
        a[0] = 1;
        for (int i = 1; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = 0;
        int l = 0, r = 0;
        for (r = 0; r < n; r++)
        {
            if (a[l] < b[r])
            {
                ans++;
                l++;
            }
        }
        cout << n - ans << endl;
    }
    return 0;
}