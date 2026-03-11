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
        bool poss = true;
        bool sm = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                sm = false;
                break;
            }
        }
        if (sm)
        {
            cout << "0\n";
            continue;
        }
        // string sd = reverse(s.begin(), s.end());
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                poss = false;
                break;
            }
        }
        if (poss)
        {
            cout << n - 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}