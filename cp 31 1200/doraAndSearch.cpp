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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int l = 1;
        int r = n;
        int max = n;
        int min = 1;
        int ans1 = -1;
        int ans2 = -1;
        while (r - l + 1 > 3)
        {
            // int max = *max_element(v.begin() + l, v.begin() + r + 1);
            // int min = *min_element(v.begin() + l, v.begin() + r + 1);
            // cout << min << endl;
            // cout << max << endl;
            // cout << "l " << v[l] << endl;
            // cout << "r " << v[r] << endl;

            if (v[l] == max || v[l] == min)
            {
                if (v[l] == max)
                {
                    max--;
                }
                else
                {
                    min++;
                }
                l++;
            }
            else if (v[r] == max || v[r] == min)
            {
                if (v[r] == max)
                {
                    max--;
                }
                else
                {
                    min++;
                }
                r--;
            }
            else
            {

                ans1 = l;
                ans2 = r;
                break;
            }
        }
        if (ans1 != -1)
        {
            cout << l << " " << r << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}