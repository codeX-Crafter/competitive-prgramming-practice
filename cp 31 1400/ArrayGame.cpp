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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> temp;
        for (int i = 1; i < n; i++)
        {
            temp.push_back(v[i] - v[i - 1]);
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < temp.size(); i++)
        // {
        //     cout << temp[i] << " ";
        // }
        // cout << endl;

        int ans = 0;
        if (k == 1)
        {
            ans = *min_element(temp.begin(), temp.end());
            ans = min(ans, v[0]);
        }
        else if (k == 2)
        {
            ans = *min_element(temp.begin(), temp.end());
            ans = min(ans, v[0]);
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    temp.push_back(abs(v[j] - v[i]));
                }
            }
            // cout << ans << endl;
            for (int i = 0; i < temp.size(); i++)
            {
                auto idx = lower_bound(v.begin(), v.end(), temp[i]) - v.begin();
                int id = idx - 1;
                // cout << idx << " " << id << " " << endl;
                if (idx >= 0 && idx <= n - 1)
                {
                    int a = abs(v[idx] - temp[i]);
                    ans = min(ans, a);
                    // cout << "a " << a << endl;
                }
                if (id >= 0 && id <= n - 1)
                {
                    int b = abs(temp[i] - v[id]);
                    ans = min(ans, b);
                    // cout << "b " << b << endl;
                }
                // cout << ans << endl;
            }
            // cout << endl;
        }
        else
        {
            ans = 0;
        }

        cout << ans << endl;
    }
    return 0;
}