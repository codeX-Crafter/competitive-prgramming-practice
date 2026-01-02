#include <bits/stdc++.h>
using namespace std;
#define int long long

// p a p i c i p a p 

// a b c a a c a b 
// 2

// k h y y h h y h k y
 

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
        int l = 0;
        int r = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                l = i;
                r = n - i - 1;
                break;
            }
        }

        int l2 = l;
        int r2 = r;
        bool poss = true;
        bool poss2 = true;
        int ele1 = s[l];
        int ele2 = s[r];
        int ans = 0;
        int ans2 = 0;

        if (l != 0 || r != 0)
        {
            while (l < r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == ele1)
                    {
                        l++;
                        ans++;
                    }
                    else if (s[r] == ele1)
                    {
                        r--;
                        ans++;
                    }
                    else
                    {
                        poss = false;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
                // cout << ans << endl;
            }
            l = l2;
            r = r2;

            poss2 = true;
            while (l < r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == ele2)
                    {
                        l++;
                        ans2++;
                    }
                    else if (s[r] == ele2)
                    {
                        r--;
                        ans2++;
                    }
                    else
                    {
                        poss2 = false;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            // cout << ans << endl;
        }
        if (poss && poss2)
        {
            cout << min(ans, ans2) << endl;
        }
        else if (poss)
        {
            cout << ans << endl;
        }
        else if (poss2)
        {
            cout << ans2 << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}