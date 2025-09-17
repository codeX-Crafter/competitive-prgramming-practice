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
        int n, k;
        cin >> n >> k;
        vector<int> cost(n);
        vector<int> dis(k);
        int sumK = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
            sum += cost[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> dis[i];
            sumK += dis[i];
        }
        int ans = 0;
        sort(cost.begin(), cost.end(), cmp);
        sort(dis.begin(), dis.end());

        int ptr = -1;

        for (int i = 0; i < k; i++)
        {
            // if (ptr += dis[i] <= n - 1)
            // {
            if (ptr > n - 1)
                break;
            ptr += dis[i];
            if (ptr > n - 1)
                break;
            ans += cost[ptr];
            // }
        }

        cout << sum - ans << endl;
    }
    return 0;
}