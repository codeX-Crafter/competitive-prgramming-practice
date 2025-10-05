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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // idhr unique function basically consecutive duplicates ko remove kr deta h like not from array but
        // It removes consecutive duplicates from a range [first, last).
        // But it does not actually erase elements from the container, it just rearranges them so that the unique elements are at the front.
        // It returns an iterator to the new logical end of the unique range.

        n = unique(v.begin(), v.end()) - v.begin();

        int ans = n;
        for (int i = 0; i + 2 < n; i++)
        {
            if ((v[i] < v[i + 1] && v[i + 1] < v[i + 2]) ||
                (v[i] > v[i + 1] && v[i + 1] > v[i + 2]))
            {
                ans--;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

// WA on 364th test case :(

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
//         vector<int> v(n);
//         int ans = n;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int contrast = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             contrast += abs(v[i] - v[i + 1]);
//         }
//         // cout << "con " << contrast << endl;

//         bool possible = true;
//         int mini = INT_MAX;
//         for (int i = 0; i <= n - 3; i++)
//         {
//             ans = n;
//             int idx = i + 1;
//             possible = true;
//             while (possible && ((idx + 1) <= n - 1))
//             {
//                 if (abs(v[i] - v[idx]) + abs(v[idx] - v[idx + 1]) == abs(v[i] - v[idx + 1]))
//                 {
//                     ans--;
//                     idx++;
//                 }
//                 else
//                 {
//                     possible = false;
//                     break;
//                 }
//             }
//             mini = min(mini, ans);
//         }

//         if (n == 2)
//         {
//             mini = 2;
//         }
//         if (contrast == 0)
//         {
//             mini = 1;
//         }
//         cout << mini << endl;
//     }
//     return 0;
// }