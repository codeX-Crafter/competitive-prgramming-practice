#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> v(n + 1);
        int maxi = INT_MIN;

        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i];
            maxi = max(maxi, v[i]);
        }
        if (v[j] == maxi || k > 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}

// ternary
//  cout << (k > 1 || a[j] == maxi ? "YES" : "NO") << '\n';