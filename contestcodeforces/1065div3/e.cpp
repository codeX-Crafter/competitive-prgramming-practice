#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int full = n / 4;
        int rem = n % 4;

        // vector<int> v(n);
        for (int i = 0; i < full; i++)
        {
            int b = 4 * i;
            cout << b + 4 << " " << b + 1 << " " << b + 3 << " " << b + 2 << " ";
        }

        int start = (4 * full) + 1;

        if (rem == 1)
        {
            cout << start;
        }
        else if (rem == 2)
        {
            cout << start + 1 << " " << start;
        }
        else if (rem == 3)
        {
            cout << start + 1 << " " << start << " " << start + 2;
        }

        cout << "\n";
    }
    return 0;
}
