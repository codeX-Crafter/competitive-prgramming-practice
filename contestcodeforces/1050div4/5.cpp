#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> freq;
        bool pos = true;
        for (int i = 0; i < n; i++)
        {
            freq[v[i]]++;
        }
        for (auto z : freq)
        {
            if (z.second % k != 0)
                return 0;
        }
    }
    return 0;
}
