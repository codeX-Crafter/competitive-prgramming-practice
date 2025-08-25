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
        string ss = s;

        int n = s.size();
        bool possible = true;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                possible = false;
                break;
            }
        }

        sort(s.begin(), s.end());

        int distinct = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                distinct++;
        }

        if (distinct == 1 || possible)
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