#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // cout << (1 << 30);
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        vector<int> x(q);
        vector<int> hash(31);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }
        // sort(x.begin(), x.end());

        for (int i = 0; i < q; i++)
        {
            if (hash[x[i]] != 0)
                continue;
            hash[x[i]]++;

            // if (x[i] == x[i - 1] && i != 0)
            //     continue;
            for (int j = 0; j < n; j++)
            {
                int p = pow(2, x[i]);
                if ((a[j] % p) == 0)
                {
                    a[j] += pow(2, (x[i] - 1));
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         // cout << (1 << 30);
//         int n, q;
//         cin >> n >> q;
//         vector<int> a(n);
//         vector<int> x(q);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             cin >> x[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 int p = pow(2, x[i]);
//                 if ((a[j] % p) == 0)
//                 {
//                     a[j] += pow(2, (x[i] - 1));
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }