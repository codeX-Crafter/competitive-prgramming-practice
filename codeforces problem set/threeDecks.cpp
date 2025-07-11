#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int target = (a + b + c) / 3;

        int available = c - target;

        if ((a + b + c) % 3 != 0)
        {
            cout << "NO" << "\n";
        }
        else if (a > target || b > target)
        {
            cout << "NO" << "\n";
        }
        else if ((target - b) + (target - a) == available)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}