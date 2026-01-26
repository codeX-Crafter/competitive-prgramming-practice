#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> v(n);
        bool poss = false;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // if ((s - v[i]) % x == 0)
            // {
            //     poss = true;
            // }
            sum+=v[i];
        }
        if ((s - sum) % x == 0 && sum<=s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}