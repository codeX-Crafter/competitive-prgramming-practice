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
        int a = -1;
        int b = -1;
        int c = -1;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        // for (int i = 1; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        for (int i = 2; i <= n - 1; i++)
        {
            if ((v[i] > v[i - 1]) && (v[i] > v[i + 1]))
            {
                // cout << "v[i] " << v[i] << "\n";

                a = i - 1;
                b = i;
                c = i + 1;
                break;
            }
        }
        if (b == -1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}