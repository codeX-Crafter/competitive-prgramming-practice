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
        int a = 0;
        int b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}