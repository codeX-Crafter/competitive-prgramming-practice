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
        vector<int> v(n);
        int idx = -1;
        int sec = -1;
        int ele = 0;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == n)
                idx = i;

            if ((n - i) != v[i] && sec == -1)
            {
                sec = i;
                ele = n - i;
            }
            if (v[i] == ele)
            {
                z = i;
            }
        }

        if (n <= 1)
        {
            idx = 0;
        }
        else if (idx != 0)
            reverse(v.begin(), v.begin() + idx + 1);
        else if (sec != -1)
            reverse(v.begin() + sec, v.begin() + z + 1);

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}