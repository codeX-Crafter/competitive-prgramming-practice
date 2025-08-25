#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int &a, int &b)
{
    return a > b;
}

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
        sort(v.begin(), v.end(), cmp);
        int ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}