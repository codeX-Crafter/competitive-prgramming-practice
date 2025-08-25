#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> coprimes(1001);

void precompute()
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                coprimes[i].push_back(j);
            }
        }
    }
}

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        precompute();
    }
    return 0;
}