#include <bits/stdc++.h>
using namespace std;
#define int long long

// this is toh brute solution would obviously work but tle aayega and optimisation kra h
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = -1;
        for (int i = n - 1; i != 0; i--)
        {
            for (int j = n - 1; j != 0; j--)
            {
                if (__gcd(v[i], v[j]) == 1)
                {
                    ans = max(ans, (i + j + 2));
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}