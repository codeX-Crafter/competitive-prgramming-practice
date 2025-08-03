#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<vector<long long>> v;
        for (long long i = 0; i < n; i++)
        {
            long long m;
            cin >> m;

            vector<long long> x(m);
            for (int j = 0; j < m; j++)
            {
                cin >> x[j];
            }
            sort(x.begin(), x.end());
            v.push_back(x);
        }

        long long mini = INT_MAX;
        long long minitwo = INT_MAX;
        long long sum = 0;

        for (long long i = 0; i < n; i++)
        {
            if (v[i].size() >= 2)
            {
                minitwo = min(minitwo, v[i][1]);
            }

            mini = min(mini, v[i][0]);
        }
        sum += mini;

        for (long long i = 0; i < n; i++)
        {
            if (v[i].size() >= 2)
            {
                sum += v[i][1];
            }
        }
        sum -= minitwo;

        cout << sum << endl;
    }
    return 0;
}