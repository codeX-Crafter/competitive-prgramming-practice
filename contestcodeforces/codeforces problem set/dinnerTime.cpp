#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p, q;
        cin >> n >> m >> p >> q;

        if (n % p == 0 && (n / p) * q != m)
        {
            cout << "NO" << endl;
        }

        // highly shocked how this else statement handles all test cases couldn't come up to the solution myself but WOW
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}

// This problem was supposed to be for cyclic arrays, and also required construction, but due to D2A difficulty it was adjusted!