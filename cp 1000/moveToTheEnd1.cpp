
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long> maxs(n);
        vector<long long> sums(n);
        long long sum = 0;
        for (long long i = n - 1; i >= 0; i--)
        {
            sum += v[i];
            sums[i] = sum;
        }
        // for (long long i = 0; i < n; i++)
        // {
        //     cout << sums[n - i - 1] << " ";
        // }
        // cout << "\n";
        long long maxi = INT_MIN;
        for (long long i = 0; i < n; i++)
        {
            maxi = max(maxi, v[i]);
            maxs[i] = maxi;
        }
        // for (long long i = 0; i < n; i++)
        // {
        //     cout << maxs[n - i - 1] << " ";
        // }
        // cout << "\n";
        cout << maxs[n - 1] << " ";
        for (long long i = 1; i < n; i++)
        {
            cout << sums[n - i] + maxs[n - i - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}