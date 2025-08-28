#include <bits/stdc++.h>
using namespace std;
#define int long long

int lcm(int a, int b)
{
    int mul = a * b;
    int gcdd = __gcd(a, b);
    return (mul / gcdd);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ex = n / lcm(x, y);
        x = (n / x) - ex;
        y = (n / y) - ex;
        int hehe = (n * (n + 1)) / 2;
        int hehe2 = ((n - x) * ((n - x) + 1)) / 2;
        int plus = hehe - hehe2;

        int minus = (y * (y + 1)) / 2;
        cout << plus - minus << endl;
    }
    return 0;
}