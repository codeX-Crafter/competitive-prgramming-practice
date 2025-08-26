#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool possible = true;

        set<char> c;
        for (int i = 0; i < n; i++)
        {
            if (c.find(s[i]) == c.end())
            {
                c.insert(s[i]);
            }
            else
            {
                break;
            }
        }

        int distinct = c.size();
        char ele = s[0];
        for (int i = distinct; i < n; i++)
        {
            if (s[i - distinct] != s[i])
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n"; //
        }
    }
    return 0;
}