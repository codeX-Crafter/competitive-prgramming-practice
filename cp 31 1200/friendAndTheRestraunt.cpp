// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// bool cmp(pair<int, int> &a, pair<int, int> &b)
// {
//     return (a.second - a.first) < (b.second - b.first);
// }

// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> x(n);
//         vector<int> y(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> x[i].first;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> x[i].second;
//         }
//         sort(x.begin(), x.end(), cmp);
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << x[i].first << " " << x[i].second << endl;
//         // }
//         // cout << endl;
//         int sum = 0;
//         int l = 0;
//         int r = n - 1;
//         for (int i = 0; i < n; i++)
//         {
//             sum += (x[i].second - x[i].first);
//         }
//         while (sum < 0)
//         {
//             sum -= (x[l].second - x[l].first);
//             l++;
//         }
//         int ans = 0;
//         int suml = 0;
//         int sumr = 0;

//         while (l < r)
//         {

//             suml += (x[l].second - x[l].first);
//             if (sumr == 0)
//                 sumr += (x[r].second - x[r].first);

//             if (suml + sumr >= 0)
//             {
//                 ans++;
//                 l++;
//                 r--;
//                 suml = 0;
//                 sumr = 0;
//             }
//             else
//             {
//                 // r--;
//                 l++;
//                 suml = 0;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> x(n), y(n), d(n);
        for (auto &i : x)
            cin >> i;
        for (auto &i : y)
            cin >> i;

        for (int i = 0; i < n; i++)
        {
            d[i] = y[i] - x[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << d[i] << " ";
        // }
        // cout << endl;

        sort(d.begin(), d.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << d[i] << " ";
        // }
        // cout << endl;

        int l = 0, r = n - 1;
        int ans = 0;

        while (l < r)
        {
            if (d[l] + d[r] >= 0)
            {
                ans++;
                l++;
                r--;
            }
            else
            {
                l++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
