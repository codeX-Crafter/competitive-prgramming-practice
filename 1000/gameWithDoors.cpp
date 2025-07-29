#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        int ans;
        if (L > r || l > R)
        {
            ans = 1;
        }
        else if (l == L && r == R)
        {
            ans = r - l;
        }
        else if (r == L || R == l)
        {
            ans = 2;
        }
        else
        {
            // harshita finding common segment
            if ((l < L && r < R))
            {
                ans = r - L;
                if (abs(l - L) != 0)
                {
                    ans++;
                }
                if (abs(r - R) != 0)
                {
                    ans++;
                }
            }
            else if ((L < l && R < r))
            {
                ans = R - l;
                if (abs(l - L) != 0)
                {
                    ans++;
                }
                if (abs(r - R) != 0)
                {
                    ans++;
                }
            }
            else if ((l <= L && R <= r) || (L <= l && r <= R))
            {
                ans = min((r - l), (R - L));
                if (abs(l - L) != 0)
                {
                    ans++;
                }
                if (abs(r - R) != 0)
                {
                    ans++;
                }
            }

            // ans = min((r - l), (R - L));
            // if (abs(l - L) != 0)
            // {
            //     ans++;
            // }
            // if (abs(r - R) != 0)
            // {
            //     ans++;
            // }
        }
        cout << ans << "\n";
    }
}