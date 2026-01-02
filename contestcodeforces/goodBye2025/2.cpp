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
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'u')
            {
                if (i - 1 < 0 || s[i - 1] != 's')
                {
                    ans++;
                    s[i] = 's';
                }
                else if (i + 1 > n - 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
