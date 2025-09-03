#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool possible = false;
        int ans = -1;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] - 'a' > s[i + 1] - 'a')
            {
                possible = true;
                ans = i;
                // bhai literally I wrote ans=1 and this is not the first time I made this stupid error
                break;
            }
        }
        if (possible)
        {
            cout << "YES\n";
            cout << ans + 1 << " " << ans + 2;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}