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
        // lambda funtion
        auto solve = [&](int k, int a, int b, int x, int y)
        {
            int steps = 0;
            // steps = ceil((k - a) / x)
            // steps = (k - a + x) / x
            // Adding x before dividing works because integer division in C++ always floors.
            // Adding x makes sure anything non-zero in (k - a) % x bumps it to the next integer.
            steps += max((k - a + x) / x, 0);

            k -= max((k - a + x) / x, 0) * x;

            steps += max((k - b + y) / y, 0);

            return steps;
        };

        cout << max(solve(k, a, b, x, y), solve(k, b, a, y, x)) << endl;
    }
    return 0;
}