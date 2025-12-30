#include <bits/stdc++.h>
using namespace std;
#define int long long

// referred to shayan's yt contest discussion for this one

// on paper samajh aagya the implementation sounds a bit abstract though will go through one again later (hopefully)

// Fix the ending bits as all 1s, then keep jumping in steps big enough so those bits don’t change.
// Repeat this for shorter and shorter suffixes until all numbers are printed.

// The code prints all numbers from 0 to 2ⁿ−1 in an order based on their binary form. It groups numbers by how many trailing 1s they have, printing those with more trailing 1s first. For each group, base = 2^k fixes the last k bits as 1 by starting from base − 1, and x += base * 2 moves to the next number while keeping those bits unchanged. This way, every number appears exactly once using only power-of-two jumps.

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int base = 1 << n; base; base /= 2)
            for (int x = base - 1; x < (1 << n); x += base * 2)
                cout << x << " ";

        cout << endl;
    }
    return 0;
}