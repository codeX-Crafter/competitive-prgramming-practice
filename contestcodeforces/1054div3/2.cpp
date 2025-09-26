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
        int mini = INT_MIN;
        for (int i = 1; i < n; i += 2)
        {
            int var = (v[i] - v[i - 1]);
            mini = max(mini, var);
        }
        cout << mini << endl;
    }
    return 0;
}