// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int bee = 0;
//         int maxBee = INT_MIN;
//         int l = 0;
//         int r = k - 1;
//         int ans = 0;
//         for (int i = 0; i < k; i++)
//         {
//             if (s[i] == 'B')
//             {
//                 bee++;
//             }
//         }
//         maxBee = max(maxBee, bee);
//         while (maxBee < k)
//         {
//             if (s[l] == 'B')
//             {
//                 bee--;
//                 l++;
//             }
//             if (s[r] == 'B' && r < n)
//             {
//                 bee++;
//                 r++;
//             }
//             maxBee = max(maxBee, bee);
//         }
//         ans = k - maxBee;
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int bee = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'B')
                bee++;
        }

        int maxBee = bee;

        for (int i = k; i < n; i++)
        {

            if (s[i - k] == 'B')
                bee--;
            if (s[i] == 'B')
                bee++;
            maxBee = max(maxBee, bee);
        }

        int ans = k - maxBee;
        cout << ans << endl;
    }
    return 0;
}
