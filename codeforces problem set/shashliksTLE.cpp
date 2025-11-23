#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        int steps = 0;
        if (k >= a && k >= b)
        {
            if (x <= y)
            {
                while (k >= a)
                {
                    k = k - x;
                    steps++;
                }
                while (k >= b)
                {
                    k = k - y;
                    steps++;
                }
            }
            else if (y < x)
            {
                while (k >= b)
                {
                    k = k - y;
                    steps++;
                }
                while (k >= a)
                {
                    k = k - x;
                    steps++;
                }
            }
        }
        else if (k >= a)
        {
            while (k >= a)
            {
                k = k - x;
                steps++;
            }
        }
        else if (k >= b)
        {
            while (k >= b)
            {
                k = k - y;
                steps++;
            }
        }
        cout << steps << "\n";
    }
    return 0;
}