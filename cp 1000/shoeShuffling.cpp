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
        bool possible = true;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i].first = i + 1;
            cin >> v[i].second;
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = v[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i].second == v[i + 1].second && i != (n - 1))
            {
                // cout << ans[i] << ans[i + 1] << endl;

                swap(ans[i], ans[i + 1]);
                // cout << "hi1" << endl;

                // cout << ans[i] << ans[i + 1] << endl;
            }
            else if (v[i].second == v[i - 1].second && i != 0)
            {
                // cout << ans[i] << ans[i - 1] << endl;
                // swap(ans[i], ans[i - 1]);
                // cout << "hi2" << endl;
                // cout << ans[i] << ans[i - 1] << endl;
                continue;
            }
            else
            {
                possible = false;
                break;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << ans[i] << " ";
        // }
        if (!possible || n == 1)
        {
            cout << "-1";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}