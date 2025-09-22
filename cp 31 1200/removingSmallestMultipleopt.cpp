#include <bits/stdc++.h>
using namespace std;
#define int long long

// bool mark(int start, vector<int> &pre, int n)
// {
//     for (int i = start; i < n; i++)
//     {
//         if (i % start == 0 && pre[i] == 0)
//         {
//             pre[i] = start;
//         }
//     }
// }

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
        // cout << s << endl;
        int ans = 0;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            v[i] = i;
        }
        // for (int i = 1; i < n + 1; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;

        for (int i = 1; i <= n; i++)
        {

            if (s[i - 1] == '0' && v[i] != -1)
            {
                ans += i;
            }

            if (s[i - 1] == '0')
                for (int j = 2 * i; j <= n; j += i)
                {
                    if (v[j] == -1)
                        continue;
                    if (s[j - 1] == '0')
                    {
                        ans += i;
                        v[j] = -1;
                    }
                    else
                    {
                        break;
                    }
                }
        }
        // for (int i = 1; i < n + 1; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;

        cout << ans << endl;
    }
    return 0;
}