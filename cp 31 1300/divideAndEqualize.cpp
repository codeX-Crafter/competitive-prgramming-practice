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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        unordered_map<int, int> mp;

        // total O(N sqrt(N))
        for (int x : v) // this is O(N)
        {
            int val = x;
            for (int p = 2; p * p <= val; p++) // this is O(sqrt(N)
            {
                while (val % p == 0)
                {
                    mp[p]++;
                    val /= p;
                }
            }
            if (val > 1)
                mp[val]++;
        }

        bool possible = true;
        for (auto &it : mp)
        {
            if (it.second % n != 0)
            {
                possible = false;
                break;
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
}
