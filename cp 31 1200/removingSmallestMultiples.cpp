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
            if (v[i] == -1)
            {
                // for (int j = i + 1; j <= n; j++)
                // {
                //     if (v[j] == -1)
                //         continue;

                //     if (v[j] % i == 0)
                //     {
                //         if (s[j - 1] == '0')
                //         {
                //             ans += i;
                //             v[j] = -1;
                //             // cout << ans << endl;
                //         }
                //         else
                //         {
                //             break;
                //         }
                //     }
                // }
                continue;
            }

            if (s[i - 1] == '0')
            {
                ans += v[i];
                // cout << "hi " << ans << endl;

                for (int j = i + 1; j <= n; j++)
                {
                    if (v[j] == -1)
                        continue;

                    if (v[j] % v[i] == 0)
                    {
                        if (s[j - 1] == '0')
                        {
                            ans += v[i];
                            v[j] = -1;
                            // cout << ans << endl;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                v[i] = -1;
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