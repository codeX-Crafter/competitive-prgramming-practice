#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        int negatives = 0;
        int mini = INT_MAX;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += abs(v[i][j]);
                mini = min(mini, abs(v[i][j]));
                if (v[i][j] < 0)
                    negatives++;
            }
        }
        if (negatives % 2 != 0)
        {
            sum = sum - (2 * (mini));
        }
        cout << sum << endl;
    }
    return 0;
}