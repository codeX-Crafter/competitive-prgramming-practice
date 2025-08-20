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
        vector<int> prefix(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum += v[i];
            prefix[i] = sum;
        }

        int ans = 0;
        int maxi = 0;
        // int num;
        // int num = ceil((double(n)) / 2);

        // if (n % 2 != 0)
        // {
        //     num++;
        // }

        for (int i = 0; i < n; i++)
        {
            if (((prefix[n - 1] - prefix[i]) != 0))
                ans = __gcd(prefix[i], (prefix[n - 1] - prefix[i]));
            maxi = max(ans, maxi);
        }
        cout << maxi << endl;
    }
    return 0;
}