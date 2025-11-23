#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int a, int b)
{
    return a > b;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end(), cmp);
        int sum = 0;
        for (auto &x : a)
        {
            if (sum + x <= k)
                sum += x;
            else
                break;
        }
        cout << k - sum << '\n';
    }
    return 0;
}