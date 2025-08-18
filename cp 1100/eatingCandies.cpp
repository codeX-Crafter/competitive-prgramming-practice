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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int l = 1;
        int r = n;
        int suml = v[l];
        int sumr = v[r];
        int maxSum = 0;
        int ans = 0;
        while (l < r)
        {

            if (suml == sumr)
            {
                if (suml >= maxSum)
                {
                    maxSum = suml;
                    ans = l + (n - r + 1);
                }
                l++;
                r--;
                suml += v[l];
                sumr += v[r];
            }
            else if (suml > sumr)
            {
                r--;
                sumr += v[r];
            }
            else
            {
                l++;
                suml += v[l];
            }
        }
        cout << ans << endl;
    }
    return 0;
}