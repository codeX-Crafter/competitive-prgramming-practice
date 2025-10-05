#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool possible = true;
        if ((n * n) - 2 < k)
        {
            // cout << (n * n) - 2 << " " << k << endl;
            possible = false;
        }
        if ((n * n) == k)
        {
            possible = true;
        }
        vector<vector<char>> v(n, vector<char>(n));
        if (possible)
        {
            int x = 0;

            if (k > 0)
            {
                v[0][0] = 'U';
                x++;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (v[i][j] != 0)
                        continue;
                    x++;

                    if (x <= k)
                        v[i][j] = 'U';

                    if (x > k)
                    {
                        if (i == n - 1 && j != n - 1)
                        {
                            v[i][j] = 'R';
                        }
                        else if (i == n - 1 && j == n - 1)
                        {
                            v[i][j] = 'L';
                        }
                        else
                        {
                            v[i][j] = 'D';
                        }
                    }
                }
            }
            cout << "YES\n";

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << v[i][j];
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
