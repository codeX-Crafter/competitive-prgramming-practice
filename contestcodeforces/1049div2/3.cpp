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
        vector<int> a = v;
        sort(a.begin(), a.end());
        int val = ((n + 1) / 2);
        int max = 0;
        int min = 0;
        for (int i = n - 1; i >= 0; i++)
        {
            if (i >= val)
                max += a[i];
            else
                min += a[i];
        }
    }

    return 0;
}