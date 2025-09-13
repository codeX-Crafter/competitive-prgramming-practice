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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }
        int ans = 0;

        sort(odd.begin(), odd.end(), cmp);
        if (odd.size() == 0)
        {
            ans = 0;
        }
        else
        {
            for (int i = 0; i < even.size(); i++)
            {
                ans += even[i];
            }
            int k = (odd.size() + 1) / 2;
            for (int i = 0; i < k; i++)
            {
                ans += odd[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
