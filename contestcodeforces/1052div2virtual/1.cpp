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
        vector<int> hash(101, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        bool poss = true;
        int ele = v[0];
        for (int i = 0; i < n; i++)
        {
            if (v[i] == ele)
                cnt++;
            else
            {
                break;
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == ele)
            {
                count++;
            }
            else
            {
                hash[count]++;
                ele = v[i];
                count = 1;
            }
            if (i == n - 1)
            {
                hash[count]++;
            }
        }
        // for (int i = 0; i < 101; i++)
        // {
        //     if (hash[i] != 0)
        //     {
        //         cout << hash[i] << " " << i << endl;
        //     }
        // }

        int final = INT_MIN;
        for (int i = 0; i < 101; i++)
        {
            int ans = 0;

            for (int j = i; j < 101; j++)
            {
                ans += (i * hash[j]);
            }
            final = max(final, ans);
        }
        cout << final << endl;
    }
    return 0;
}