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
        int z = ((n * (n - 1)) / 2);
        vector<int> b(z + 1);
        for (int i = 1; i <= z; i++)
        {
            cin >> b[i];
        }
        // cout << b[1] << endl;

        sort(b.begin() + 1, b.end());
        vector<int> a(n + 1);
        int idx = 1;
        // cout << b[idx] << endl;
        int var = n - 1;
        for (int i = 1; i < n; i++)
        {
            a[i] = b[idx];
            idx += var;
            var--;
        }
        a[n] = a[n - 1];
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        // while (idx!=z){
        //     a[idx]=
        // }
    }
    return 0;
}