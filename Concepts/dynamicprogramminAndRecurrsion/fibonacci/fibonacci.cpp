#include <bits/stdc++.h>
using namespace std;

// Similar to climbing stairs

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
    cout << fibonacci(n) << endl; // to print nth fibonacci number

    // to print series till nth fibonacci no.
    for (int i = 0; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
