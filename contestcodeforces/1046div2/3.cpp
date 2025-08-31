#include <bits/stdc++.h>
using namespace std;
#define int long long
// nhi hua bhai ppl are saying its dp+greedy and i couldn't dentify dp kaise lgega
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        vector<int> hash(n, -1);

        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
            mpp[v[i].first]++;
        }

        sort(v.begin(), v.end());
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }
        // cout << endl;
        int ans = 0;
        // cout << "ans  " << ans << endl;

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i].first == 1)
            {
                if (hash[v[i].second] != 0)
                {
                    hash[v[i].second] = 0;
                    // cout << "jj " << v[i].second << endl;
                    ans++;
                    // cout << "ans1  " << ans << endl;
                }
                continue;
            }
            else if (mpp[v[i].first] >= v[i].first)
            {
                bool possible = true;
                for (int j = (v[i - v[i].first + 1].second); j <= v[i].second; j++)
                {
                    if (hash[j] != -1)
                    {
                        possible = false;
                    }
                }

                if (possible)
                {
                    // cout << "hehe " << (v[i - v[i].first + 1].second) << " " << v[i].second << endl;

                    // cout << "num  " << v[i].first << endl;

                    ans += v[i].first;
                    mpp[v[i].first] -= v[i].first;

                    for (int j = (v[i - v[i].first + 1].second); j <= v[i].second; j++)
                    {
                        hash[j] = 0;

                        // cout << "j " << j << endl;
                    }
                    // cout << "ans2  " << ans << endl;
                    continue;
                }
                else
                {
                    mpp[v[i].first]--;
                }
            }
            else
            {
                continue;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     if (hash[i] == 0)
        //     {
        //         ans++;
        //     }
        // }
        cout << ans << endl;
    }
    return 0;
}