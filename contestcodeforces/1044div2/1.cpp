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
        sort(v.begin(), v.end());
        int ele = v[0];
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (ele == v[i])
            {
                cnt++;
                if (cnt == 2)
                    break;
            }
            else
            {
                cnt = 1;
                ele = v[i];
            }
        }
        if (cnt == 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}