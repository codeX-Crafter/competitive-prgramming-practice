// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> v(n);
//         // map<int, int> mpp;
//         bool possible = true;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i].first;
//             v[i].second = i;
//         }

//         sort(v.begin(), v.end());

//         int ele = v[0].first;
//         int cnt = 0;
//         map<int, int> freq;
//         for (int i = 0; i < n; i++)
//         {
//             if (v[i].first == ele)
//             {
//                 cnt++;
//             }
//             else
//             {
//                 if (cnt % ele != 0)
//                 {
//                     possible = false;
//                     break;
//                 }
//                 else
//                 {
//                     freq[ele] = cnt / ele;
//                 }
//                 cnt = 1;
//                 ele = v[i].first;
//             }
//         }
//         if (possible && cnt % ele != 0)
//         {
//             possible = false;
//         }

//         vector<int> ans(n);
//         if (possible)
//         {
//             int ww = 1;
//             for (int i = 0; i < n; i++)
//             {
//                 while(freq[v[i]]--){

//                 }

//             }
//             for (int i = 0; i < n; i++)
//             {
//                 cout << ans[i] << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             cout << "-1\n";
//         }
//     }
//     return 0;
// }