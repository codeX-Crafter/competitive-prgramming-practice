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
        string ans = "";

        unordered_set<string> present;
        for (int i = 0; i < n; i++)
        {
            string x = "";
            for (int len = 1; len <= 3 && i + len <= n; len++)
            {
                x += s[i + len - 1];
                present.insert(x);
            }
        }

        bool found = false;

        for (char c = 'a'; c <= 'z'; c++)
        {
            string y(1, c);
            if (!present.count(y))
            {
                ans = y;
                found = true;
                break;
            }
        }
        if (!found)
            for (char c1 = 'a'; c1 <= 'z'; c1++)
            {
                for (char c2 = 'a'; c2 <= 'z'; c2++)
                {
                    string y = "";
                    y += c1;
                    y += c2;
                    if (!present.count(y))
                    {
                        ans = y;
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
        if (!found)
            for (char c1 = 'a'; c1 <= 'z'; c1++)
            {
                for (char c2 = 'a'; c2 <= 'z'; c2++)
                {
                    for (char c3 = 'a'; c3 <= 'z'; c3++)
                    {
                        string y = "";
                        y += c1;
                        y += c2;
                        y += c3;
                        if (!present.count(y))
                        {
                            ans = y;
                            found = true;
                            break;
                        }
                    }
                    if (found)
                        break;
                }
                if (found)
                    break;
            }
        cout << ans << endl;
    }
    return 0;
}
