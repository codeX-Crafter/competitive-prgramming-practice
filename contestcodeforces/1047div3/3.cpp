#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = -1;

        int n = b;
        int k = 1;
        int maxAns = -1;

        if (b % 2 == 0)
        {
            k = b / 2;
            if (((a * k) + (b / k)) % 2 == 0)
                maxAns = ((a * k) + (b / k));
        }
        else
        {
            if ((a + b) % 2 == 0)
                maxAns = max(maxAns, (a + b));
            if (((a * b) + 1) % 2 == 0)
                maxAns = max(maxAns, ((a * b) + 1));
        }

        cout << max(maxAns, ans) << endl;
    }
    return 0;
}