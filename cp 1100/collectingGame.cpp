#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i].first = x;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        vector<int> sum(n);
        int summ = 0;
        for (int i = 0; i < n; i++)
        {
            summ += v[i].first;
            sum[i] = summ;
        }
        vector<int> ans(n);
        int nxt = 0;
        for (int i = 0; i < n; i++)
        {
            int sumi = sum[nxt];
            if (i <= nxt)
            {
                ans[v[i].second] = nxt;
            }
            else
            {
                // sumi = sum[nxt + 1];
                for (int j = nxt + 1; j < n; j++)
                {
                    sumi = sum[j];
                    if (v[j].first <= sumi)
                    {
                        nxt++;
                        // sumi = v[j].first;
                        // nxt = j;
                    }
                    else
                    {
                        // nxt++;
                        break;
                    }
                }
                ans[v[i].second] = nxt;
            }

            // if (nxt == 0)
            // {
            //     nxt++;
            // }
            // ans[v[i].second] = idx - 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}