#include <bits/stdc++.h>
using namespace std;

int find(int lr, int n)
{
    return lr / n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        // cout << find(r, 2) << " " << ((find(l, 3)) / 2) << " " << ((find(l, 5)) / 2) << " " << ((find(l, 7)) / 2) << "\n";
        long long ansl = find(l, 2) + find(l, 3) + find(l, 5) + find(l, 7) - find(l, 6) - find(l, 10) - find(l, 14) - find(l, 15) - find(l, 21) - find(l, 35);
        long long ansr = find(r, 2) + find(r, 3) + find(r, 5) + find(r, 7) - find(r, 6) - find(r, 10) - find(r, 14) - find(r, 15) - find(r, 21) - find(r, 35);
        long long ans = (r - ansr) - (l - ansl);
        cout << ans << "\n";
    }
    return 0;
}
