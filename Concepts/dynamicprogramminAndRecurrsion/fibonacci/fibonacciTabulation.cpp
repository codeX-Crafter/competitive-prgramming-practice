#include <bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 ....
int fibonacci(int n)
{
    if (n <= 1)
        return n; // base condition
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return 0;
}
