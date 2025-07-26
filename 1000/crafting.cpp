#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        vector<long long> a(n);
        vector<long long> b(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // for (long long i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        vector<long long> dif;

        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
            int diff = b[i] - a[i];
            // cout << diff << " ";
            // cout << "\n";

            dif.push_back(diff);
            if (diff > 0)
            {
                cnt++;
            }
        }

        bool flag = false;
        sort(dif.begin(), dif.end());

        if (((dif[n - 2])) <= ((-1) * dif[n - 1]))
        {
            flag = true;
        }

        // cout << ((-1) * (dif[0])) << " ";
        // cout << ((-1) * (dif[n - 1])) << "\n";

        if (cnt > 1 || !flag)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}