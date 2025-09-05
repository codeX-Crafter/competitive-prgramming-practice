// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main()
// {

//     vector<int> v;
//     int n = 1;
//     int powi = 0;
//     while (n <= 1e9)
//     {
//         n = (1LL << powi);
//         v.push_back(n);
//         powi++;
//     }
//     v.push_back(LLONG_MAX);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int num;
//         cin >> num;
//         vector<pair<int, int>> vec(num);
//         for (int i = 0; i < num; i++)
//         {
//             int x;
//             cin >> x;

//             vec[i].first = x;
//             vec[i].second = i;
//         }
//         sort(vec.begin(), vec.end());

//         int upp = lower_bound(v.begin(), v.end(), vec[0].first) - v.begin();
//         // cout << "upp " << upp << endl;

//         // upp--;
//         // if (upp == vec[0].first)
//         //     upp = upp / 2;

//         vector<int> hehe;
//         int cnt = 0;
//         // cout << "upp " << upp << endl;
//         for (int i = 0; i < num; i++)
//         {

//             if (vec[i].first < v[upp + 1])
//             {
//                 cnt++;
//             }
//             if (vec[i].first >= v[upp + 1])
//             {
//                 hehe.push_back(cnt);
//                 cnt = 1;
//                 upp++;
//             }
//             else if (i == num - 1)
//             {
//                 hehe.push_back(cnt);
//             }
//             // cout << "cnt " << cnt << endl;
//         }

//         int ans = 0;
//         for (int i = 0; i < hehe.size(); i++)
//         {
//             ans += ((hehe[i] * (hehe[i] - 1)) / 2);
//         }

//         cout << ans << endl;
//     }

//     // cout << "hey  " << v[v.size() - 1] << endl;

//     return 0;
// }
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> count(32, 0);

        for (int x : a)
        {
            int pos = 0;
            for (int i = 0; i < 32; i++)
            {
                if (x & (1 << i))
                    pos = i;
            }
            count[pos]++;
        }

        int ans = 0;
        for (int c : count)
        {
            ans += c * (c - 1) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}
