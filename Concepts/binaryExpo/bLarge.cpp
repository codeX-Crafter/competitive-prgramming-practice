#include <bits/stdc++.h>
using namespace std;
#define int long long
// iterative method
int binaryExpo(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b % 2 != 0 || b & 1 == 1) // odd
        {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        b = b >> 1;
    }
    return ans;
}

signed main()
{
    int m = 1e9 + 7;
    cout << binaryExpo(50, binaryExpo(36, 20, m - 1), m) << endl;
    // cout << binaryExpo(2, 4) << endl;
    // cout << binaryExpo(2, 5) << endl;
    // cout << binaryExpo(2, 6) << endl;

    return 0;
}