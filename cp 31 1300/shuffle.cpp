#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, m;
        cin >> n >> x >> m;

        vector<pair<int, int>> v(m);
        pair<int, int> ans;
        ans.first = x;
        ans.second = x;
        bool poss = false;
        for (int i = 0; i < m; i++)
        {
            int ele1, ele2;
            cin >> v[i].first;
            cin >> v[i].second;
            ele1 = v[i].first;
            ele2 = v[i].second;

            if(max(ans.first, ele1) <= min(ans.second, ele2)){

                ans.first = min(ans.first, ele1);
                ans.second = max(ans.second, ele2);
            }
        }
        // sort(ans.begin(), ans.end());
        // vector<pair<int, int>> final;
        // int opt = 0;
        // for (int i = 0; i < ans.size(); i++)
        // {

        //     cout << ans[i].first << " " << ans[i].second << endl;
        // }
        // if (ans.size() != 0)
        // {
        //     final.push_back(ans[0]);

        //     for (int i = 1; i < ans.size(); i++)
        //     {
        //         int st = ans[i].first;
        //         int fn = ans[i].second;
        //         if (st <= final[final.size() - 1].second)
        //         {
        //             final[final.size() - 1].second = max(fn, final[final.size() - 1].second);
        //         }
        //         else
        //         {
        //             final.push_back(ans[i]);
        //         }
        //     }
        //     int sz = final.size();
        //     for (int i = 0; i < sz; i++)
        //     {
        //         int st = final[i].first;
        //         int fn = final[i].second;
        //         cout << final[i].first << " " << final[i].second << endl;

        //         if ((st == x || fn == x) || (st < x && fn > x))
        //         {
        //             opt = fn - st + 1;
        //             break;
        //         }
        //     }
        // }
        // if (opt == 0)
        //     opt = 1;
        cout << ans.second - ans.first + 1 << endl;
    }
    return 0;
}
