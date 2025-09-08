#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int &a, int &b)
{
    return a > b;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        vector<int> maxii(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int maxi = 0;
        for (int i = 0; i < m - 1; i++)
        {
            maxi = max(maxi, (v[i + 1] - v[i] - 1));
            maxii[i] = (v[i + 1] - v[i] - 1);
        }
        maxi = max(maxi, ((n - v[m - 1]) + (v[0] - 1)));

        maxii[m - 1] = ((n - v[m - 1]) + (v[0] - 1));
        sort(maxii.begin(), maxii.end(), cmp);

        // cout << "vec " << endl;
        // for (int i = 0; i < m; i++)
        // {
        //     cout << maxii[i] << " ";
        // }
        // cout << endl;
        int ans = 0;
        int para = 0;
        for (int i = 0; i < m; i++)
        {
            // cout << "heyy " << maxii[i] - para << endl;

            if (maxii[i] - para >= 0)
            {
                if ((maxii[i] - para) == 1 || (maxii[i] - para) == 2)
                {
                    ans += 1;
                }
                else if ((maxii[i] - para) > 2)
                {
                    ans += ((maxii[i] - para) - 1);
                }
            }
            else
            {
                break;
            }
            para += 4;
            // cout << ans << endl;
        }

        // int ans = 0;
        // if (maxi == 1 || maxi == 2)
        // {
        //     ans = 1;
        // }
        // else if (maxi > 2)
        // {
        //     ans = maxi - 1;
        // }

        cout << n - ans << endl;
    }
    return 0;
}