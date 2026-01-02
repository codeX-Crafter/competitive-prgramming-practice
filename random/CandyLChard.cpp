// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         int n;
//         cin >> n;
//         vector<int> ratings(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> ratings[i];
//         }

//         int ans = n;

//         vector<int> dup(n, 1);

//         for (int i = 0; i < n; i++)
//         {
//             vector<pair<int, int>> temp;
//             if ((i - 1) >= 0)
//                 temp.push_back({ratings[i - 1], i - 1});
//             temp.push_back({ratings[i], i});
//             if (i + 1 <= n - 1)
//                 temp.push_back({ratings[i + 1], i + 1});

//             sort(temp.begin(), temp.end());

//             for (int k = 0; k < temp.size(); k++)
//             {
//                 int w = temp[k].second;

//                 if (((k - 1) >= 0 && temp[k - 1].first < temp[k].first))
//                 {

//                     dup[w] = dup[w - 1] + 1;
//                 }
//                 else if (((k + 1) <= n - 1 && temp[k + 1].first < temp[k].first))
//                 {
//                     if (dup[w] <= dup[w + 1])
//                     {
//                         dup[w]++;
//                     }
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << dup[i] << " ";
//         }
//         cout << endl;

//         ans = accumulate(dup.begin(), dup.end(), 0);

//         cout << ans << endl;
//     }
//     return 0;
// }
