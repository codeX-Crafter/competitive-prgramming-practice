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
        int cons = 0;
        int maxi = 0;
        int n = s.size();
        int zero = 0;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            if (s[i] == '1')
            {
                cons++;
                if (n > 2)
                {
                    if (i == n - 1)
                    {
                        if (s[0] == '1')
                            if (zero > 0)
                                cons += start;
                    }
                }
                maxi = max(maxi, cons);
            }
            else
            {
                if (cons == i)
                {
                    start = cons;
                }
                cons = 0;
            }
            // if (n >= 2)
            // {
            //     if (s[n - 1] == '1' && (s[0] == '1'))
            //     {
            //         cons++;
            //         maxi = max(maxi, cons);
            //     }
            // }
        }
        int ans;
        if (maxi == 1)
        {
            ans = 1;
        }
        else if (maxi == 0)
        {
            ans = 0;
        }
        else if (maxi == n)
        {
            ans = maxi * maxi;
        }
        else
        {
            // ans = ((maxi - 1) * 2);
            ans = 0;
            int l = 1;
            int r = maxi;
            while (l <= r)
            {
                ans = max(ans, l * r);
                l++;
                r--;
                // cout << ans << endl;
            }
        }
        // cout << zero << endl;
        // cout << "n " << n << endl;
        // cout << "maxi " << maxi << endl;
        cout << ans << endl;
        // cout << ((maxi - 1) * 2) << endl;
    }
    return 0;
}