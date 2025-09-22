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

        if (v[n - 2] > v[n - 1])
        {
            cout << "-1\n";
        }
        else
        {
            if (v[n - 1] < 0)
            {
                if (is_sorted(v.begin(), v.end()))
                {
                    cout << "0\n";
                }
                else
                {
                    cout << "-1\n";
                }
            }
            else
            {
                cout << n - 2 << endl;
                for (int i = 0; i < n - 2; i++)
                {
                    cout << i + 1 << " " << n - 1 << " " << n << endl;
                }
            }
        }
    }
    return 0;
}