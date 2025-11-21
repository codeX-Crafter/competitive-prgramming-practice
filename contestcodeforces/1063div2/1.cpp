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
        bool poss = true;
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i += 2)
        {
            if (i + 1 < n)
            {
                if (v[i] != v[i + 1])
                {
                    poss = false;
                    break;
                }
            }
        }
        if (poss)
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