#include <bits/stdc++.h>
using namespace std;
#define int long long
// iterative method
int binaryExpo(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b % 2 != 0 || b & 1 == 1) // odd
        {
            ans *= a;
        }
        a *= a;
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