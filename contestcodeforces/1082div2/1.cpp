#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        bool poss = false;

        if (y > 0)
        {
            if (x >= 2 * y)
            {
                x -= (2 * y);
                if (x % 3 == 0)
                {
                    poss = true;
                }
            }
        }
        else if (y < 0)
        {

            if (x >= (-(4 * y)))
            {
                x -= llabs(4 * y);
                if (x % 3 == 0)
                {
                    poss = true;
                }
            }
        }
        else if (y == 0)
        {
            if (x % 3 == 0)
            {
                poss = true;
            }
        }

        if (poss)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}