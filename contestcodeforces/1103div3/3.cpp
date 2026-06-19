#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        int ans = max(a, b) - min(a, b);
        vector<int> v;
        v.push_back(ans);
        bool flag = true;
        int cnt = 0;
        while (flag)
        {
            if (a > b)
            {
                a /= x;
            }
            else
            {
                b /= x;
            }
            cnt++;
            v.push_back(cnt + (max(a, b) - min(a, b)));

            if (a == b)
                flag = false;
        }
        v.push_back(min(cnt, ans));
        ans = *min_element(v.begin(), v.end());

        cout << ans << endl;
    }
    return 0;
}
