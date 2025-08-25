#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int &a, int &b)
{
    return abs(a) > abs(b);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool possible = false;

        sort(v.begin(), v.end());

        int l = 0;
        int r = 1;
        while (r < n)
        {
            if (v[r] - v[l] == k)
            {
                possible = true;
                break;
            }
            else if ((v[r] - v[l]) > k)
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}