#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;
        int alice1 = abs(x - a);
        int alice2 = abs(y - a);
        int bob = abs(x - y);

        if (max(alice1, alice2) > bob)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}