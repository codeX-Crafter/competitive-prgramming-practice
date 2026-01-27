#include <bits/stdc++.h>
using namespace std;
#define int long long

// monotonic funtion
// TTTTTTFFFFF

bool possible(int idx, vector<int> &v, int h)
{
    vector<int> temp(v.begin(), v.begin() + idx);
    sort(temp.begin(), temp.end());
    int sz = temp.size();
    int eli = 0;
    for (int i = sz - 1; i >= 0; i -= 2)
    {
        eli += temp[i];
    }
    return (eli <= h);
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0;
        int r = n;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (possible(mid, v, h))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

// O(n log² n)