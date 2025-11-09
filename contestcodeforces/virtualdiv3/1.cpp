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
        int sum1 = 0;
        int sum2 = 0;
        int avg = 0;
        int maxi = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            // sum1 += v[i];
            sum2 = 0;
            for (int j = i; j <= n; j++)
            {
                sum2 += v[j];
                avg = sum2 / (j - i + 1);
                maxi = max(maxi, avg);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}