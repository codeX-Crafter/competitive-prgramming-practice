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
        int evens = 0;
        int odds = 0;
        int e1 = -1;
        int e2 = -1;
        bool poss = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                evens++;
            }
            else
            {
                odds++;
            }
        }
        if (evens >= 2)
        {
            poss = true;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0 && e1 == -1)
                {
                    e1 = v[i];
                }
                else if (v[i] % 2 == 0 && e2 == -1)
                {
                    e2 = v[i];
                    break;
                }
            }
            cout << e1 << " " << e2 << endl;
        }
        else
        {
            for (int i = 0; i < min(n, 100LL); i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if ((v[j] % v[i]) % 2 == 0)
                    {
                        cout << v[i] << " " << v[j] << endl;
                        poss = true;
                        break;
                    }
                }
                if (poss)
                    break;
            }
        }
        if (!poss)
        {
            cout << "-1\n";
        }
    }
    return 0;
}