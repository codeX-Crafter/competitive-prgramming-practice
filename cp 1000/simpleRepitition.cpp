#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) // tc - O(root x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x > 1 && k > 1)
        {
            cout << "NO\n";
        }
        else if (x > 1)
        {
            if (is_prime(x))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if (k == 2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}