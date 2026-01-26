#include <bits/stdc++.h>
using namespace std;
#define int long long

// this was a good question when it comes to binary search - editorial dekh ke kra
// the ps was simple and short but again I could just break the prblem int parts but wasn't able to come up with some "optimised" solution

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int res = 0;
        vector<int> x;
        for (int i = 1; i <= n; i++)
        {
            if (i > v[i])
            {
                res +=( lower_bound(x.begin(), x.end(), v[i]) - x.begin());
                x.push_back(i);
            }
        }

        cout << res << endl;
    }
    return 0;
}