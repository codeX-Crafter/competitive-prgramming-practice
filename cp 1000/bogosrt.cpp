#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int &a, int &b)
{
    return a > b;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin() + 1, v.end(), cmp);

        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
