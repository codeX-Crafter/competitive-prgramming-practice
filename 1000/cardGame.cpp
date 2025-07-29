#include <bits/stdc++.h>
using namespace std;

int cmp(int y, int u)
{
    if (y > u)
    {
        return 1;
    }
    if (y == u)
    {
        return 0;
    }
    if (y < u)
    {
        return -1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if (cmp(a, c) + cmp(b, d) > 0)
        {
            ans++;
        }
        if (cmp(a, d) + cmp(b, c) > 0)
        {
            ans++;
        }
        if (cmp(b, c) + cmp(a, d) > 0)
        {
            ans++;
        }
        if (cmp(b, d) + cmp(a, c) > 0)
        {
            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}