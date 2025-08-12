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
        int n = s.size();
        int ele = s[0];
        int ans = 0;
        int cnt1 = 0;
        int cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt1++;
            }
            if (s[i] == '0')
            {
                cnt0++;
            }
        }
        if (min(cnt1, cnt0) % 2 != 0)
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NET\n";
        }
    }
    return 0;
}