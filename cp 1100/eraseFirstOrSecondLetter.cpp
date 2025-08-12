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
        string s;
        cin >> s;
        int unique = 0;
        int element = s[0];
        set<int> seti;
        // vector<int> v(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            seti.insert(s[i]);
            // v[i] = seti.size();
            ans += seti.size();
        }
        cout << ans << endl;
    }
    return 0;
}