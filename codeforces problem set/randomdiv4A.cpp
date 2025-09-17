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
        int cntA = 0;
        int cntB = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                cntA++;
        }
        if (cntA > (s.size() - cntA))
        {
            cout << "A\n";
        }
        else
        {
            cout << "B\n";
        }
    }
    return 0;
}