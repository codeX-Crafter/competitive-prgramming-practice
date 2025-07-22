#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        long long ansl = l - ((l / 10) * 4);
        long long ansr = r - ((r / 10) * 4);
        long long ans = ansr - ansl;
        cout << ans << "\n";
        cout << ansl << "\n";
        cout << ansr << "\n";
    }
    return 0;
}
