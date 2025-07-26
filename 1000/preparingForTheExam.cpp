#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        vector<int> q(k);
        vector<bool> used(n + 1, false);

        for (int i = 0; i < m; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
            used[q[i]] = true;
        }

        for (int i = 0; i < m; i++)
        {
            if (k == n || (k == n - 1 && !used[a[i]]))
            {
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << "\n";
    }
    return 0;
}
