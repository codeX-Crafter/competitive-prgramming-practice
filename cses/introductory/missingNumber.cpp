#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;

        int num = 1;
        for (int i = 0; i <= n - 1; i++)
        {
            if (v[i] != num)
            {
                ans = num;
                break;
            }
            num++;
        }
        cout << ans << endl;
    }
    return 0;
}