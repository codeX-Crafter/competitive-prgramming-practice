#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e8 + 10;

int binaryMultiply(int a, int b)
{
    int ans = 0;
    while (b > 0)
    {
        if (b % 2 != 0 || b & 1 == 1) // odd
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b = b >> 1;
    }
    return ans;
}

int binaryExpo(int a, int b)
{
    a = a % M;
    int ans = 1;
    while (b > 0)
    {
        if (b % 2 != 0 || b & 1 == 1) // odd
        {
            ans = binaryMultiply(a, ans);
        }
        a = binaryMultiply(a, a);
        b = b >> 1;
    }
    return ans;
}

signed main()
{

    cout << binaryExpo(2, 3) << endl;
    cout << binaryExpo(2, 4) << endl;
    cout << binaryExpo(2, 5) << endl;
    cout << binaryExpo(2, 6) << endl;

    return 0;
}