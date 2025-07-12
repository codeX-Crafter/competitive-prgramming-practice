#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);

        int maxDiff = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i > 0)
            {
                maxDiff = max(maxDiff, v[i] - v[i - 1]);
            }
        }
        if ((2 * (x - v[n - 1])) > maxDiff || (v[0] - 0) > maxDiff)
        {
            if ((2 * (x - v[n - 1])) > (v[0] - 0))
            {

                cout << (2 * (x - v[n - 1])) << "\n";
            }
            else
            {
                cout << (v[0] - 0) << "\n";
            }
        }

        else
        {
            cout << maxDiff << "\n";
        }
    }
    return 0;
}

// code