#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
/*
Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ordered ways you can produce a money sum x using the available coins.
*/

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> coins(n);
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }

        vector<int> nextState(x + 1, 0);
        nextState[0] = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            vector<int> currState(x + 1, 0);
            currState[0] = 1;
            for (int k = 1; k <= x; k++)
            {
                // not pick
                int notPick = nextState[k];

                // pick
                int pick = 0;
                if (k - coins[i] >= 0)
                {
                    pick = currState[k - coins[i]];
                }
                currState[k] = (pick + notPick) % MOD;
            }
            nextState = currState;
        }
        cout << nextState[x] << endl;
    }
    return 0;
}