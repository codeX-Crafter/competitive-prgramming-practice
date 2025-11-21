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

        vector<int> v(n);
        int sumOdd = 0;
        int sumEven = 0;
        vector<int> precompute(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i % 2 == 0)
            {
                sumOdd += v[i];
            }
            else
            {
                sumEven += v[i];
            }
            precompute[i] = sumEven - sumOdd;
        }
        sort(precompute.begin(), precompute.end());
        bool possible = false;
        for (int i = 1; i < n; i++)
        {
            // cout << precompute[i] << " ";
            if (precompute[i] == 0 || precompute[i] == precompute[i - 1])
            {
                possible = true;
                break;
            }
        }
        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        // cout << endl;
    }
    return 0;
}