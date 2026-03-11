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

        int num=n;
        vector<int> v;
        for (int i = 2; i * i <= num; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                while (n % i == 0)
                {
                    n /= i;
                }
            }
        }
        v.push_back(n);
        int ans = 1;
        for (int i = 0; i < v.size(); i++)
        {
            ans *= v[i];
        }
        cout << ans << endl;
    }
    return 0;
}
