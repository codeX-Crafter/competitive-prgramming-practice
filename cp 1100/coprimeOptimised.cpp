#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<unordered_set<int>> coprimes(1001);

void precompute()
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                coprimes[i].insert(j);
            }
        }
    }
}

signed main()
{
    precompute();
    int t;
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
        vector<int> last(1001, -1);
        for (int i = 0; i < n; i++)
        {
            last[v[i]] = i + 1;
        }
        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if (last[i] == -1)
                continue;
            for (auto j : coprimes[i])
            {
                if (last[j] != -1)
                {
                    ans = max(ans, last[i] + last[j]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}