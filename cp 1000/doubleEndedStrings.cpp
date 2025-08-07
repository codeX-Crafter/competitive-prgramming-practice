#include <bits/stdc++.h>
using namespace std;
// yeh question was of longest common substring
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int n = a.size();
        int m = b.size();
        int ans = 0;
        for (int len = 1; len <= min(n, m); len++)
        {
            for (int i = 0; i + len <= n; i++)
            {
                for (int j = 0; j + len <= m; j++)
                {
                    if (a.substr(i, len) == b.substr(j, len))
                    {
                        ans = max(ans, len);
                    }
                }
            }
        }
        cout << a.size() + b.size() - 2 * ans << "\n";

        // int maxi;
        // // cout << a.size() << endl;
        // // cout << b.size() << endl;
        // // cout << a.size() + b.size() << endl;

        // string first;
        // string second;
        // if (a.size() >= b.size())
        // {
        //     maxi = a.size();
        //     first = a;
        //     second = b;
        // }
        // else
        // {
        //     maxi = b.size();
        //     first = b;
        //     second = a;
        // }
        // // cout << first << endl;
        // // cout << second << "\n";

        // int cnt = 0;
        // int maxCnt = INT_MIN;
        // // int r = 0;
        // for (int i = 0; i < maxi; i++)
        // {
        //     int l = i;

        //     for (int j = 0; j < (a.size() + b.size() - maxi); j++)
        //     {
        //         // cout << j << " " << l << endl;
        //         if (first[l] == second[j])
        //         {

        //             l++;
        //             // r++;
        //             // cout << cnt << endl;

        //             cnt++;
        //             // break;
        //             // cout << cnt << endl;
        //         }
        //         else
        //         {
        //             cnt = 0;
        //             l++;
        //         }
        //         maxCnt = max(maxCnt, cnt);
        //         if (maxCnt == (a.size() + b.size() - maxi))
        //         {
        //             break;
        //         }
        //     }
        //     if (maxCnt == (a.size() + b.size() - maxi))
        //     {
        //         break;
        //     }
        // }
        // // cout << maxCnt << endl;
        // cout << a.size() + b.size() - (2 * maxCnt) << endl;
    }
    return 0;
}
