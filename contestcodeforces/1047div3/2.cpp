#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
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
        for (int i = 0; i < n; i++)
        {
            v[i] = n + 1 - v[i];
        }
        for (int i = 0; i < n; i++)
        {

            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}