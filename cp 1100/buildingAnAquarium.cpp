#include <bits/stdc++.h>
using namespace std;
#define int long long

// greed approach h worked but editorial m binary search on answer use kiya h
// min possible height = 0
// max possible height = max element of the array + w
// we binary search between min and max
// for each mid in binary search:
//   - calculate water needed to make every column at least height = mid
//   - if water_needed <= w:
//         → possible → search in higher half (lo = mid)
//     else:
//         → not possible → search in lower half (hi = mid - 1)
// at the end, lo = maximum achievable height

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int height = v[0];
        // w-=v[0];
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
                continue;

            if ((w - ((v[i] - v[i - 1]) * i)) >= 0)
            {
                w -= ((v[i] - v[i - 1]) * i);
                height = v[i];
            }
            else
            {
                int z = (w / i);
                height += z;
                // cout << z << endl;
                // w = 0;
                w = 0;
                break;
            }
            // cout << "w " << w << endl;
            // cout << "height " << height << endl;
        }
        if (w >= n)
            height += (w / n);
        // cout << "w " << w << endl;

        cout << height << endl;
    }
    return 0;
}