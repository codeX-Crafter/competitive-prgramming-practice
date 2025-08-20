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
        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
                neg++;
            v[i] = abs(x);
        }
        sort(v.begin(), v.end());

        int ans = accumulate(v.begin(), v.end(), 0LL);
        // this 0 instead of 0LL thing ke kaaran wrong answer aa rha tha for tc 3

        if ((int)neg % 2 != 0)
        {
            ans = ans - (2 * abs(v[0]));
        }

        cout << ans << endl;
    }
    return 0;
}