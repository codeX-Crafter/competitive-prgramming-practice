#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 10e6 + 10;
int M;
int n;
int trees[N];

bool isPossible(int h)
{
    int wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] >= h)
        {
            wood += (trees[i] - h);
        }
    }
    return wood >= M;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> M;
        for (int i = 0; i < n; i++)
        {
            cin >> trees[i];
        }

        int low = 0;
        int high = 1e9;
        int mid;

        while (high - low > 1)
        {
            mid = ((low + high) / 2);
            if (isPossible(mid))
            {
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (isPossible(high))
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

// TC O(nlog(H))