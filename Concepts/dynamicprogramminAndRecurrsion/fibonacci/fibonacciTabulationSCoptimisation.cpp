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

        int prev2 = 0;
    int prev1 = 1;
    int curr;
    for (int i = 2; i <= n; i++)
    {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl;
    return 0;
}

// TC is O(N)
// SC is O(1) NO recurrsion stack space , NO dp array
