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
        vector<vector<int>> v;
        vector<int> in(n);
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> in[i];
                if (i == n - 1)
                    v.push_back(in);
            }
        }
        int num1 = n;
        int num = ceil((double)n / 2);
        // cout << num << endl;
        int opts = 0;
        for (int i = 0; i < num; i++)
        {
            if (n % 2 != 0)
            {
                if (i == (num - 1))
                {
                    num1 = num;
                }
            }
            for (int j = 0; j < num1; j++)
            {

                if (v[i][j] != v[n - i - 1][n - j - 1])
                {
                    opts++;
                    // cout << i << " " << j << endl;
                }
            }
        }
        // cout << opts << endl;
        if (n % 2 != 0 && (opts <= k))
        {

            cout << "YES\n";
        }
        else if (n % 2 == 0 && (((k - opts) % 2 == 0) && opts <= k))
        {

            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }
    return 0;
}