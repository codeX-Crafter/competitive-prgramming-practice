#include <bits/stdc++.h>
using namespace std;
#define int long long
const long long MAXX = 1000000000;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n);
        int maxi = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxi = max(maxi, v[i]);
        }
        vector<int> sp(m);
        for (int i = 0; i < m; i++)
        {
            cin >> sp[i];
            maxi = max(maxi, sp[i]);
        }
        string s;
        cin >> s;

        map<int, vector<int>> deathHAHA;

        sort(sp.begin(), sp.end());
        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(sp.begin(), sp.end(), v[i]);
            if (it != sp.begin())
            {
                int left = *(it - 1);
                int dist = (left - v[i]);
                deathHAHA[dist].push_back(i);
            }
            if (it != sp.end())
            {
                int right = *it;
                int distR = (right - v[i]);
                deathHAHA[distR].push_back(i);
            }
        }

        vector<bool> isDead(n, false);
        int globalDev = 0;
        int alive = n;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                globalDev--;
            }
            else
            {
                globalDev++;
            }
            for (auto x : deathHAHA[globalDev])
            {
                if (!isDead[x])
                {
                    alive--;
                    isDead[x] = true;
                }
            }
            deathHAHA[globalDev].clear();
            cout << alive;
            if (i != s.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}