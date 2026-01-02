#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int n = a.size();
        int m = b.size();

        // vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        vector<int> prevState(m + 1);

        for (int j = 0; j <= m; j++)
        {
            prevState[j] = j;
        }

        for (int i = 1; i <= n; i++)
        {
            vector<int> currentState(m + 1);
            currentState[0] = i;

            for (int j = 1; j <= m; j++)
            {
                char x = a[i - 1];
                char y = b[j - 1];
                if (x == y)
                {
                    currentState[j] = prevState[j - 1];
                }
                else
                {
                    currentState[j] = prevState[j - 1] + 1;
                }

                currentState[j] = min(currentState[j], prevState[j] + 1);
                currentState[j] = min(currentState[j], currentState[j - 1] + 1);
            }
            prevState = currentState;
        }
        cout << prevState[m] << endl;
    }
    return 0;
}


