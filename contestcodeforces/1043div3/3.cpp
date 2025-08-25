#include <bits/stdc++.h>
using namespace std;
#define int long long
// yeh wala C1 h greedy approach tha
long long powEr(int base, int exp)
{
    long long res = 1;
    while (exp > 0)
    {
        if (exp % 2 != 0)
            res *= base;
        base *= base;
        exp /= 2;
    }
    return res;
}
int mulltiply(int power)
{
    if (power == 0)
        return 3;
    return ((powEr(3, (power + 1)) + power * powEr(3, (power - 1))));
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;

        while (n > 0)
        {
            int power = 0;
            int p = 1;
            while (p * 3 <= n)
            {
                power++;
                p = p * 3;
            }
            int d = n / p;
            ans += (d * (mulltiply(power)));
            n -= (d * p);
        }
        cout << ans << endl;
    }
    return 0;
}


//C2 approach , editorial m binary search use kra h

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// long long powEr(int base, int exp)
// {
//     long long res = 1;
//     while (exp > 0)
//     {
//         if (exp % 2 != 0)
//             res *= base;
//         base *= base;
//         exp /= 2;
//     }
//     return res;
// }
// int mulltiply(int power)
// {
//     if (power == 0)
//         return 3;
//     return ((powEr(3, (power + 1)) + power * powEr(3, (power - 1))));
// }
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int k;
//         cin >> k;
//         int ans = 0;
//         int deals = 0;
//         while (n > 0)
//         {
//             int power = 0;
//             int p = 1;
//             while (p * 3 <= n)
//             {
//                 power++;
//                 p = p * 3;
//             }

//             int d = n / p;
//             if (d >= k)
//             {
//                 k -= d;
//             }
//             else
//             {
//                 d = k;
//             }

//             // deals += d;

//             ans += (d * (mulltiply(power)));
//             n -= (d * p);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

