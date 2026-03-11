#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int a, int b)
{
    return b < a;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        if (s.size() == 1)
        {
            ans = 0;
        }
        int n = s.size();

        // cout << s << endl;

        // cout << n << endl;

        // int idx = -1;
        // int r = 0;

        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int y = (s[i] - '0');
            sum += y;
            if (i == 0)
                v.push_back(y - 1);
            else
            {
                v.push_back(y);
            }
        }
        sort(v.begin(), v.end(), cmp);

        int req = sum - 9;
        int tc = 0;
        if (sum <= 9)
        {
            ans = 0;
        }
        else
            for (int i = 0; i < v.size(); i++)
            {
                tc += v[i];
                ans++;
                if (tc >= req)
                    break;
            }
        cout << ans << endl;
    }
    return 0;
}