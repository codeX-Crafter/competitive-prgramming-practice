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
        int cnt = 0;
        bool poss = false;
        // sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                poss = true;
                // cnt++;
                break;
            }
            else
            {
                // cnt++;
            }
        }
        if (poss)
            cout << 1 << endl;
        else
        {
            cout << s.size() << endl;
        }
    }
    return 0;
}