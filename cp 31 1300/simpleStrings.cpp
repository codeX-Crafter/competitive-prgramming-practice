#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                if (s[i - 1] != c && (i + 1 == n || s[i + 1] != c))
                {
                    s[i] = c;
                    break;
                }
            }
        }
    }

    cout << s << endl;

    return 0;
}