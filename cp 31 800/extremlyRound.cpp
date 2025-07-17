#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;

        int ans = ((9 * (n.length() - 1)) + (n[0] - '0'));
        cout << ans << "\n";
    }
    return 0;
}