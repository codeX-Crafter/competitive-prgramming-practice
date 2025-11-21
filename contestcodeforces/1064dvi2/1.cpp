#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        char target = s[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != target)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}