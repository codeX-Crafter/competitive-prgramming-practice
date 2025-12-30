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
        int maxi = 0;
        // int ele;
        maxi = max(maxi, abs(v[0] - v[1]));
        maxi = max(maxi, abs(v[n - 2] - v[n - 1]));
        for (int i = 1; i < n - 1; i++)
        {
            maxi = max(maxi, (abs(v[i - 1] - v[i]) + abs(v[i] - v[i + 1]) - abs(v[i - 1] - v[i + 1])));
        }

        // v.erase(v.begin() + ele);
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans += abs(v[i - 1] - v[i]);
        }
        cout << (ans - maxi) << endl;
    }
    return 0;
}