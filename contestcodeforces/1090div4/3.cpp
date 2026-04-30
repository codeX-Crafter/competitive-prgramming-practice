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
        vector<int> ans;
        int x = 3 * n;
        vector<vector<int>> temp(n, vector<int>(3));
        for (int i = 0; i < n; i++)
        {
            temp[i][0] = i + 1;
            temp[i][2] = x--;
            temp[i][1] = x--;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << temp[i][j] << " ";
                // ans.push_back(temp[i][j]);
            }
            // cout << " ";
        }
        cout << endl;
    }
    return 0;
}