#include <bits/stdc++.h>
using namespace std;
#define int long long
long long answer(vector<int> &v, int x, int n, int c)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int z = (v[i] + 2 * x);
        z = z * z;
        ans += z;
        if (ans > c)
            return c + 1;
    }
    return ans;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int ans;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int low = 0;
        int high = 1e9;
        while (low <= high)
        {
            int mid = low + ((high - low) / 2);

            int possible = answer(v, mid, n, c);
            if (possible == c)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (possible < c)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}