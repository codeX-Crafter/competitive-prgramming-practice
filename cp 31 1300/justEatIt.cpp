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
        int targ = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            targ += v[i];
        }

        int curr = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            curr += v[i];

            if (curr < 0)
            {
                curr = 0;
            }
            maxi = max(maxi, curr);
        }
        curr = 0;

        for (int i = 1; i < n; i++)
        {
            curr += v[i];
            if (curr < 0)
            {
                curr = 0;
            }
            maxi = max(maxi, curr);
        }
        maxi = max(maxi, 0ll);

        // cout << maxi << " " << targ << endl;

        if (maxi >= targ)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
