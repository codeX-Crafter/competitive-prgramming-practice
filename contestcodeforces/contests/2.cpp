#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        long long GCD = __gcd(a, b);
        long long tempa = a / GCD;
        long long tempb = b / GCD;
        if ((k >= a && k >= b) || a == b)
        {
            cout << 1 << "\n";
        }
        else
        {

            if (tempa > k || tempb > k)
            {
                cout << 2 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
    }
    return 0;
}