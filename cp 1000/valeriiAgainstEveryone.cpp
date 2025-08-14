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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool possible = false;
        sort(b.begin(), b.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] == b[i + 1])
            {
                possible = true;
                break;
            }
        }
        // cout << endl;

        if (possible)
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