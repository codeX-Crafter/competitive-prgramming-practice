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
            if (i % 2 == 0)
            {
                v[i] = -1;
            }
            else
            {
                v[i] = 3;
            }
        }
        if (n % 2 == 0)
        {
            v[n - 1] = 2;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}