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
        vector<int> xyz(n + 1);
        bool poss = true;
        xyz[v[0]] = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] + 1 <= n && xyz[v[i] + 1] == 1)
            {
                xyz[v[i]] = 1;
            }
            else if (v[i] - 1 > 0 && xyz[v[i] - 1] == 1)
            {
                xyz[v[i]] = 1;
            }
            else
            {
                poss = false;
                break;
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