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
        bool poss = true;
        int n = s.size();
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            // if (s[i] == 'Y' && s[i + 1] == 'Y')
            // {
            //     poss = false;
            // }
            if (s[i] == 'Y')
            {
                cnt1++;
            }
            // else
            // {
            //     cnt2++;
            // }
        }
        if (cnt1 >= 2)
            poss = false;
        if (poss)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
