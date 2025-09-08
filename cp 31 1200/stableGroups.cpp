#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int groups = 1;
        vector<int> gap;
        for (int i = 1; i < n; i++)
        {
            int diff = v[i] - v[i - 1];
            if (diff > x)
            {
                gap.push_back(diff);
            }
        }
        sort(gap.begin(), gap.end());
        //
        if (k == 0)
        {
            groups += gap.size();
        }
        else
            for (int i = 0; i < gap.size(); i++)
            {

                // bhai I usually use this way to compute such values but it gave precision error soreplaed this with...
                // int req = ceil(gap[i] / double(x));

                // this
                int req = (gap[i] + x - 1) / x;
                req -= 1;

                if (k >= req)
                {
                    k -= req;
                }
                else
                {
                    groups++;
                }
            }

        cout << groups << endl;
    }
    return 0;
}