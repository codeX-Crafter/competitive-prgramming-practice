#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long times15 = n / 15;
        long long mod15 = n % 15;
        long long ans;
        if (n <= 2)
        {
            ans = n + 1;
        }
        else
        {
            if (mod15 < 2)
            {
                ans = times15 + (times15 - 1) * 2 + mod15 + 3;
            }
            else
            {
                ans = times15 + times15 * 2 + 3;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}