#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i];
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << b[i];
        // }

        long long sumAns = 0;
        long long ans;
        bool flag01 = false;
        bool flag0 = false;

        for (long long i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                flag01 = true;
                sumAns = a[i] + b[i];
                break;
            }
        }
        for (long long i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                long long sum = a[i] + b[i];
                if (sum != sumAns)
                {
                    flag0 = true;
                }
                // cout << i << " " << a[i] << " " << b[i] << " sum " << sum << "\n";
                // cout << "flag0 " << flag0 << "\n";
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (!flag01)
        {
            ans = a[0] + k - a[n - 1] + 1;
        }
        else if ((flag0 || a[n - 1] > sumAns) || sumAns - a[0] > k)
        {
            ans = 0;
        }
        else
        {
            ans = 1;
        }
        cout << ans << "\n";
    }
    return 0;
}