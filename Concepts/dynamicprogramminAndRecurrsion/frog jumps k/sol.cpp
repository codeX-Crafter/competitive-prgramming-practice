#include <bits/stdc++.h>
using namespace std;

int recurr(int n, vector<int> height, int k)
{
    if (n == 0)
    {
        return 0;
    }

    int mini = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (n - i < 0)
            break;
        int jump = recurr(n - i, height, k) + abs(height[n] - height[n - i]);
        mini = min(mini, jump);
    }

    return mini;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << recurr(n - 1, height, k);
    return 0;
}