#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    double sum = 0;
    double sum2 = 0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        sum += v[r];
        if (r - l + 1 == k)
        {
            sum2 += sum;
            sum -= v[l];
            l++;
        }
    }

    double ans = sum2 / (n - k + 1);
    // cout << ans << endl;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}