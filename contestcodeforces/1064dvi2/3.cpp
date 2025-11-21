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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int cost = 0;
        int l1 = 0;
        int l2 = 1;
        int r = n - 1;
        for (int i = 0; i < n - 1; i++)
        {
            vector<pair<int, int>> yo;
            yo.push_back({v[l1], l1});
            yo.push_back({v[l2], l2});
            yo.push_back({v[r], r});
            sort(yo.begin(), yo.end());
            cost += yo[1].second;
            if (yo[1].second == l1)
            {

                l1++;
                l2++;
            }
            else if (yo[1].second == l2)
            {
                l2++;
            }
            if (yo[1].second == r)
            {
                r--;
            }
        }

        cout << cost << endl;
    }
    return 0;
}