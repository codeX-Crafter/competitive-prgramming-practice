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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> dp(n, 0);
        unordered_map<int, vector<int>> pos; // store indices of each value
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x = arr[i];
            pos[x].push_back(i);

            // can we end a block of size x here?
            if ((int)pos[x].size() >= x)
            {
                int startIdx = pos[x][pos[x].size() - x]; // block starts here
                int before = (startIdx > 0 ? dp[startIdx - 1] : 0);
                dp[i] = before + x;
            }
            else
            {
                dp[i] = (i > 0 ? dp[i - 1] : 0);
            }

            ans = max(ans, dp[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}
