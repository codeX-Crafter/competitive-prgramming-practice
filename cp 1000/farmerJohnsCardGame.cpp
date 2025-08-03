#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        vector<vector<int>> c(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[j];
            }
            sort(a.begin(), a.end());
            c[i] = a;
        }
        vector<vector<int>> b = c;
        sort(b.begin(), b.end());
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout << b[j][i] << " ";
                v.push_back(b[j][i]);
                // cout << v[k] << " ";
            }
        }

        // for (int i = 0; i < v.size(); i++)
        // {
        //     /* code */
        //     cout << v[i];
        // }

        // cout << "\n";
        vector<int> p(n);
        if (!is_sorted(v.begin(), v.end()))
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (c[j][0] == i)
                    {
                        p[i] = j + 1;
                        break;
                    }
                }
                // p[i] = c[i][0] + 1;
            }
            for (int i = 0; i < n; i++)
            {
                cout << p[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}