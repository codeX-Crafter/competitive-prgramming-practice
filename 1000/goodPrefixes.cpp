#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long sum = 0;
        long long maxi = LONG_MIN;
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            // if (sum < 0)
            //     break;
            maxi = max(maxi, v[i]);
            // cout << "maxi " << maxi << "\n";
            // cout << "v[i] " << v[i] << "\n";

            // cout << "sum1 " << sum << "\n";
            if ((sum - maxi) == maxi)
            {
                cnt++;
                // cout << "cnt " << cnt << "\n";
            }
            // cout << "sum2 " << sum << "\n";
        }
        cout << cnt << "\n";
    }
    return 0;
}