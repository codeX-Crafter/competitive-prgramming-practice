#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int daysDiff = n - m;
        int l_, r_;

        while (l < 0 && daysDiff > 0)
        {
            l++;
            daysDiff--;
        }
        l_ = l;
        while (r > 0 && daysDiff > 0)
        {
            r--;
            daysDiff--;
        }
        r_ = r;
        cout << l << " " << r << "\n";
    }
    return 0;
}