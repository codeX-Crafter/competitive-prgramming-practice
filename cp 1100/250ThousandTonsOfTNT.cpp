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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum1 = 0;
        int sum2 = 0;
        int summ = LLONG_MAX;
        int sumM = LLONG_MIN;

        int ans = 0;

        // sort(v.begin(), v.end());
        for (int i = 1; i <= (n / 2); i++)
        {
            if (n % i != 0)
                continue;
            summ = LLONG_MAX;
            sumM = LLONG_MIN;

            for (int j = 0; j < n; j++)
            {
                sum2 += v[j];
                // sum1 += v[j];
                if ((j + 1) % i == 0)
                {

                    sumM = max(sum2, sumM);
                    // cout << summ << endl;
                    // cout << sumM << endl;
                    summ = min(sum2, summ);
                    sum2 = 0;
                    // sum1 = 0;
                }
            }
            ans = max(ans, (sumM - summ));
        }

        cout << ans << endl;
    }
    return 0;
}