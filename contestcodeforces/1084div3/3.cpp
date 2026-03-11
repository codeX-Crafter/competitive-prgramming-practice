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
        // for (int i = 1; i < n; i++)
        // {

        //     if (s[i] == s[i - 1])
        //     {
        //         s[i] = '*';
        //         s[i - 1] = '*';
        //     }
        // }
        while (n--)
        {
            for (int i = 1; i < n; i++)
            {

                if (s[i] == s[i - 1])
                {
                    s[i] = '*';
                    s[i - 1] = '*';
                }
            }
            s.erase(remove(s.begin(), s.end(), '*'), s.end());
        }

        if (s.size() == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        // cout << s << endl;
    }
    return 0;
}