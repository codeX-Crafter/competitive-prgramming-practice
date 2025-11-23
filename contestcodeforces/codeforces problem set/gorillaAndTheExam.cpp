#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<long long, long long> mpp;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mpp[x]++;
        }
        vector<long long> v;
        for (auto it = mpp.begin(); it != mpp.end(); it++)
        {
            v.push_back(it->second);
        }
        sort(v.begin(), v.end());

        long long ans = mpp.size();
        long long cnt = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= k)
            {
                k = k - v[i];
                cnt++;
            }
        }

        if ((ans - cnt) == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << ans - cnt << "\n";
        }

        // find the lowerbound or less than lower bound of k in hashmap if present remove that else answer is no. ofunique elements present in given vector
    }
}