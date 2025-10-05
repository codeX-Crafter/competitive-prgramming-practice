#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 10e5 + 10;
int n, cows;
// int positions[N];

bool canPlace(int minDist, vector<int> &positions)
{
    int lastPosition = -1;
    int cntCows = cows;
    for (int i = 0; i < n - 1; i++)
    {
        if (lastPosition == -1 || positions[i] - lastPosition >= minDist)
        {
            cntCows--;
            lastPosition = positions[i];
        }
        if (cntCows == 0)
            break;
    }

    return cntCows == 0;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> cows;
        vector<int> positions(n);
        for (int i = 0; i < n; i++)
        {
            cin >> positions[i];
        }
        sort(positions.begin(), positions.end());
        int low = 0;
        int high = 10e9;
        int mid;
        while (high - low > 1)
        {
            mid = ((low + high) / 2);
            if (canPlace(mid, positions))
            {
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (canPlace(high, positions))
        {
            cout << high << endl;
        }
        else
        {
            cout << low << endl;
        }
    }
    return 0;
}

// nlog(n) + Nlog(10e9)