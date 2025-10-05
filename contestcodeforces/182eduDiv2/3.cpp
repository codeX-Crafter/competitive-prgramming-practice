#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 998244353
// yeh submit nhi hua tha pta nhi kya hi kr rhi hu idhr
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> c = a;
            vector<int> d = b;

            for (int j = i; j < n; j++)
            {

                if (j == 0)
                {
                    if (c[j] <= d[j + 1] && d[j] <= c[j + 1])
                    {
                        swap(c[j], d[j]);
                        if (is_sorted(c.begin(), c.end()) && is_sorted(d.begin(), d.end()))
                        {
                            cout << "j " << j << endl;
                            cout << "i " << i << endl;
                            ans++;
                        }
                    }
                }
                else if (j == n - 1)
                {
                    if (c[j] >= d[j - 1] && (d[j] >= c[j - 1]))
                    {
                        swap(c[j], d[j]);
                        if (is_sorted(c.begin(), c.end()) && is_sorted(d.begin(), d.end()))
                        {
                            cout << "j " << j << endl;
                            cout << "i " << i << endl;

                            ans++;
                        }
                    }
                }
                else if (c[j] >= d[j - 1] && c[j] <= d[j + 1] && (d[j] >= c[j - 1] && d[j] <= c[j + 1]))
                {
                    swap(c[j], d[j]);
                    if (is_sorted(c.begin(), c.end()) && is_sorted(d.begin(), d.end()))
                    {
                        cout << "j " << j << endl;
                        cout << "i " << i << endl;

                        ans++;
                    }
                }
                // cout << "j " << j << endl;
                if (j == 1 && i == 0)
                {
                    for (int k = 0; k < n; k++)
                    {
                        cout << c[k] << " ";
                    }
                    cout << endl;
                    for (int k = 0; k < n; k++)
                    {
                        cout << d[k] << " ";
                    }
                    cout << endl;
                }
                // if (is_sorted(c.begin(), c.end()) && is_sorted(d.begin(), d.end()))
                // {
                //     // cout << "j " << j << endl;
                //     ans++;
                // }
            }
        }
        cout << ans << endl;
    }
    return 0;
}