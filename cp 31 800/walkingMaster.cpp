#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int cnt = 0;
        if (d >= b)
        {
            cnt += (d - b);
            a += (d - b);
            b += (d - b);
        }
        if (a >= c)
        {
            cnt += (a - c);
            a -= (a - c);
        }
        if (a == c && b == d)
        {
            cout << cnt << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}