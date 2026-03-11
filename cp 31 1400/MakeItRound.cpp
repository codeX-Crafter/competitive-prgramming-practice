#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int two = 0, five = 0;

        int temp = n;
        while (temp >= 2 && temp % 2 == 0)
        {
            temp /= 2;
            two++;
        }
        temp = n;
        while (temp >= 5 && temp % 5 == 0)
        {
            temp /= 5;
            five++;
        }

        int k = 1;
        if (five > two)
        {
            while (five > two && k * 2 <= m)
            {
                k *= 2;
                two++;
            }
        }
        else if (five < two)
        {
            while (five < two && k * 5 <= m)
            {
                k *= 5;
                five++;
            }
        }

        while (k <= m && k * 10 <= m)
        {
            k *= 10;
        }

        k = (m / k) * k; // largest possible multiple of k such that k*that num is less than m is m/k
        cout << k * n << endl;
    }
    return 0;
}