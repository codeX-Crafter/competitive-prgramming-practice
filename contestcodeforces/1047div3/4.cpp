#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<vector<int>> FRQ(n + 1);
        for (int i = 0; i < n; i++)
        {
            FRQ[a[i]].push_back(i); // store indices
        }

        vector<int> b(n, 0); // result array
        int cnt = 1;
        bool ok = true;

        for (int i = 1; i <= n; i++)
        {
            if (FRQ[i].size() % i != 0)
            {
                cout << -1 << "\n";
                ok = false;
                break;
            }
            else
            {
                int c = 0;
                while (c < (int)FRQ[i].size())
                {
                    for (int v = 0; v < i; v++)
                    {
                        b[FRQ[i][c]] = cnt;
                        c++;
                    }
                    cnt++;
                }
            }
        }

        if (ok)
        {
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
