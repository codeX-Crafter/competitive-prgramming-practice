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
        int cnt = 0;
        int zero = 0;
        int other = 0;
        int extra = 0;
        int hope = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
            // else if (cnt > 0 && hope == 0)
            // {
            //     hope = cnt;

            //     // cout << "hope " << hope << endl;
            // }
            if (cnt > 0)
            {
                if (s[i] == '0')
                {
                    zero++;
                }
            }
        }
        cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
            else if (cnt > 0)
            {
                hope++;
            }
        }

        if (hope <= ((zero + 1) / 2))
        {
            hope = 1;
        }
        else
        {
            hope = hope - ((zero + 1) / 2);
        }
        cout << ((zero + hope) / 2) << endl;
    }
    return 0;
}