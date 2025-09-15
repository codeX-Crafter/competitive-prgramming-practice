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
        vector<int> v(n + 1);
        vector<int> hash(n + 1);
        int a = 0;
        int b = 0;
        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            hash[v[i]]++;
            if (v[i] == 0)
                cnt++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (v[i] != i && v[i] != 0)
            {
                // cout << "hi" << endl;
                if (a == 0)
                    a = i;
                else
                    b = i;
            }
            else if (v[i] == 0)
            {
                // cout << "hi" << endl;

                if ((cnt > 1) || (cnt == 1 && hash[i] != 0))
                {
                    if (a == 0)
                        a = i;
                    else
                        b = i;
                }
            }
        }

        // cout << a << " " << b << endl;
        int zero = 0;
        if (a == 0 && b == 0)
        {
            cout << "0\n";
        }
        else
            cout << max(zero, (b - a + 1)) << endl;
    }
    return 0;
}