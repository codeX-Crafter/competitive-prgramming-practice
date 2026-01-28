#include <bits/stdc++.h>
using namespace std;
#define int long long

int lcmm(int a, int b)
{
    int num = (a * b) / __gcd(a, b);
    return num;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else
        {
            int ans = n;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    ans = i;
                    break;
                }
            }
            cout << n / ans << " " << n - (n / ans) << endl;
        }
    }
    return 0;
}