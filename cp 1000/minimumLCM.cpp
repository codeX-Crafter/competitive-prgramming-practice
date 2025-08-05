#include <bits/stdc++.h>
using namespace std;

// long long lcm(long long a, long long b)
// {
//     if (b % a == 0)
//     {
//         return b;
//     }
//     else
//     {
//         return a * b;
//     }
// }
// bool is_prime(long long x)
// {
//     if (x <= 1)
//     {
//         return false;
//     }
//     for (long long i = 2; i * i <= x; i++)
//     {
//         if (x % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a = 1;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                break;
            }
        }

        cout << a << " " << n - a << endl;
    }
    return 0;
}

// brute force
// got TLE
//  #include <bits/stdc++.h>
//  using namespace std;

// long long lcm(long long a, long long b)
// {
//     if (b % a == 0)
//     {
//         return b;
//     }
//     else
//     {
//         return a * b;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         long long mini = INT_MAX;
//         long long myA;
//         long long myB;
//         for (int i = 1; i <= n / 2; i++)
//         {
//             long long a = i;
//             long long b = n - a;
//             // cout << a << " " << b << endl;
//             if (mini > lcm(a, b))
//             {
//                 mini = lcm(a, b);
//                 myA = a;
//                 myB = b;
//             }
//             // mini = min(mini, lcm(a, b));
//         }
//         cout << myA << " " << myB << endl;
//     }
//     return 0;
// }