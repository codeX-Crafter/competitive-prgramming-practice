// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];

//         sort(v.begin(), v.end());

//         int mini = 1e18;
//         bool ans = false;

//         for (int i = n - 1; i >= 0;)
//         {
//             int j = i;
//             while (j >= 0 && v[j] == v[i])
//                 j--;

//             int val = v[i];
//             int cnt = i - j;

//             bool win;

//             if (mini <= val + k)
//                 win = true;
//             else
//                 win = (cnt % 2 == 0);

//             if (win)
//                 ans = true;
//             else
//                 mini = min(mini, val);

//             i = j;
//         }

//         cout << (ans ? "YES" : "NO") << '\n';
//     }

//     return 0;
// }