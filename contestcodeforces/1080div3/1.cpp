#include <bits/stdc++.h>
using namespace std;
#define int long long

// void sieve
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        bool poss = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 67)
                poss = true;
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