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
        vector<int> v(n + 1);
        int x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                x++;
            v[i] = x;
            x++;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";  
        }
        cout << endl;
    }
    return 0;
}