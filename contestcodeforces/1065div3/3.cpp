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
        vector<int> a(n);
        vector<int> b(n);
        int cnta = 0;
        int cntb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                cnta++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
                cntb++;
        }
        cnta = cnta % 2;
        cntb = cntb % 2;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (i % 2 == 0)
                {
                    if (cnta == 0)
                    {
                        cnta = 1;
                        swap(b[i], a[i]);
                        if (cntb == 0)
                        {
                            cntb = 1;
                        }
                        else
                        {
                            cntb = 0;
                        }
                    }
                }
                else
                {
                    if (cntb == 0)
                    {
                        cntb = 1;
                        swap(b[i], a[i]);
                        if (cnta == 0)
                        {
                            cnta = 1;
                        }
                        else
                        {
                            cnta = 0;
                        }
                    }
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        if (cnta > cntb)
        {
            cout << "Ajisai\n";
        }
        else if (cnta < cntb)
        {
            cout << "Mai\n";
        }
        else
        {
            cout << "Tie\n";
        }
    }
    return 0;
}
