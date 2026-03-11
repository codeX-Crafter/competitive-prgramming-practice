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
        bool isSorted = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i != 0)
            {
                if (v[i] < v[i - 1])
                {
                    isSorted = false;
                }
            }
        }
        if (!isSorted)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}