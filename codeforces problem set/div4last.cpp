#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans1 = 0;
        int ans2 = 0;
        vector<int> v(s.size());

        for (int i = 0; i < s.size(); i++)
        {
            v[i] = s[i];
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (i < 3)
            {
                ans1 += v[i];
            }
            else
            {
                ans2 += v[i];
            }
        }
        if (ans1 == ans2)
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