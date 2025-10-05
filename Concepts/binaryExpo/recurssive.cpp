#include <bits/stdc++.h>
using namespace std;
#define int long long

int binaryExpo(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binaryExpo(a, b / 2);
    if (b % 2 == 0)
    {
        return res * res;
    }
    else
    {
        return a * res * res;
    }
}

signed main()
{

    cout << binaryExpo(2, 3) << endl;
    cout << binaryExpo(2, 4) << endl;
    cout << binaryExpo(2, 5) << endl;
    cout << binaryExpo(2, 6) << endl;

    return 0;
}