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
            cin >> v[i].first;
            v[i].second = i;
        }
        int maxDist = 1;
        sort(v.begin(), v.end());

        bool poss = true;
        int l = min(v[n - 1].second, v[n - 2].second);
        int r = max(v[n - 1].second, v[n - 2].second);
        // int r = v[n - 2].second;
        // cout << "hil " << l << endl;
        // cout << "hir " << r << endl;
        if ((r - l) != 1)
        {
            // cout << "hiiiiiii " << endl;

            poss = false;
        }
        else
        {
            // cout << "hil " << l << endl;
            // cout << "hir " << r << endl;
            for (int i = n - 3; i >= 0; i--)
            {
                // if (abs(v[i].second - v[i - 1].second) > maxDist)
                // {
                //     poss = false;
                //     break;
                // }
                // maxDist++;
                if (v[i].second == (l - 1))
                {
                    l--;
                }
                else if (v[i].second == (r + 1))
                {
                    r++;
                }
                else
                {

                    // cout << "hi " << v[i].second << endl;
                    // cout << "hi " << l - 1 << endl;
                    // cout << "hi " << r + 1 << endl;
                    poss = false;
                    break;
                }
            }
        }
        if (n == 1)
            poss = true;
        if (poss)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}