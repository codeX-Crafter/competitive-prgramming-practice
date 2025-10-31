#include <bits/stdc++.h>
using namespace std;
#define int long long
int x;

bool cmp(int &a, int &b)
{
    return a % x < b % x;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        int s = 0;
        int loyal = 0;
        vector<int> v(n);

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        int ans = 0;

        sort(v.begin(), v.end(), cmp);
        int poss = sum / x;
        // for (int i = 0; i < poss; i++)
        // {
        //     ans += v[i];
        // }
        for (int i = 0; i < n; i++)
        {
            s += v[i];
            if (loyal < s / x)
            {
                loyal = s / x;
                ans += v[i];
            }
            loyal = s / x;
        }

        cout << ans << endl;

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}