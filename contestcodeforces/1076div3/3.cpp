#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        vector<int> b(n);
        // int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // sum += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            a[i] = max(a[i], b[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i + 1] > a[i])
            {
                a[i] = a[i + 1];
            }
        }
        vector<int> prefix(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            prefix[i] = sum;
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (l == 1)
            {
                cout << prefix[r - 1] << " ";
            }
            else
                cout << prefix[r - 1] - prefix[l - 2] << " ";
        }
        cout << endl;
    }
    return 0;
}