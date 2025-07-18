#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, kx, ky, qx, qy;
        cin >> a >> b >> kx >> ky >> qx >> qy;

        int cnt = 0;
        if (a - kx == b - qy && a - qx == b - ky)
        {
            cnt = 1;
        }
        else if (kx - a == qx - a && ky - b == qy - b || kx + a == qx + a && ky + b == qy + b)
        {
            cnt = 1;
        }
        else if (kx - a == qx - a && ky - b == qy - b && kx - a == qx + a && ky - b == qy + b)
        {
            cnt = 2;
        }
        else if (abs(a - kx) == abs(b - qy) && abs(a - qx) == abs(b - ky))
        {
            cnt = 2;
        }
        cout << cnt << "\n";
    }
    return 0;
}
