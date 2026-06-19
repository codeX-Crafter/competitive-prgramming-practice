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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int violation = 0;
        vector<int> y;
        vector<int> idx;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                violation++;
                y.push_back(v[i - 1] - v[i]);
                idx.push_back(i);
            }
        }
        int maxi = 0;

        if (!y.empty())
        {
            maxi = *max_element(y.begin(), y.end());
        }

        // cout << violation << endl;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                v[i] += maxi;
            }
        }

        // cout << endl;
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}