#include <bits/stdc++.h>
using namespace std;
#define int long long

int cost(char c, string &s)
{
    vector<int> pos;
    for (int i = 0; i < (int)s.size(); i++)
        if (s[i] == c)
            pos.push_back(i);
    int m = pos.size();
    if (m == 0)
        return LLONG_MAX;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
        b[i] = pos[i] - i;

    sort(b.begin(), b.end());
    int median = b[m / 2];

    int ans = 0;
    for (int x : b)
        ans += abs(x - median);
    return ans;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int ans = min(cost('a', s), cost('b', s));
        cout << ans << "\n";
    }
    return 0;
}
