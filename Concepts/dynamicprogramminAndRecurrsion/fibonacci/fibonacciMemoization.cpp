#include <bits/stdc++.h>
using namespace std;

// Similar to climbing stairs

// 0 1 1 2 3 5 8 13 ....
int fibonacci(int n, vector<int> &dp)
{
    if (n <= 1)
        return n; // base condition
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n, -1);

    cout << fibonacci(n - 1, dp);

    return 0;
}
