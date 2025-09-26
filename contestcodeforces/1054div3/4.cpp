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
        int prevA = -1;
        int prevb = -1;
        int gapA = -1;
        int gapB = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                if (gapA == -1)
                {
                    prevA = i;
                    gapA++;
                }
                else
                {
                    gapA = gapA + (i - prevA - 1);
                    prevA = i;
                }
            }
            if (s[i] == 'b')
            {
                if (gapB == -1)
                {
                    prevb = i;
                    gapB++;
                }
                else
                {
                    gapB = gapB + (i - prevb - 1);
                    prevb = i;
                }
            }
        }
        int l = 0;
        int r = n - 1;
        int possA = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == 'a')
            {
                if ((i - l) <= (r - i))
                {
                    possA = possA + (i - l);
                    l++;
                }
            }
        }
        for (int i = n - 1; i >= n / 2; i--)
        {
            if (s[i] == 'a')
            {
                possA = possA + (r - i);
                r--;
            }
        }
        l = 0;
        r = n - 1;
        int possB = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == 'b')
            {
                if ((i - l) <= (r - i))
                {
                    possB = possB + (i - l);
                    l++;
                }
            }
        }
        for (int i = n - 1; i >= n / 2; i--)
        {
            if (s[i] == 'b')
            {
                possB = possB + (r - i);
                r--;
            }
        }

        // cout << "A " << possA << endl;
        // cout << "B " << possB << endl;

        int zero = 0;
        int ans = max(zero, min(gapA, gapB));
        ans = min(ans, possA);
        ans = min(ans, possB);
        cout << ans << endl;
    }
    return 0;
}