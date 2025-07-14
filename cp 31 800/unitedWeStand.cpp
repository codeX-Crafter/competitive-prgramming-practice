#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mini = min(a[i], mini);
        }
        int cntmini = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mini)
                cntmini++;
        }

        vector<int> b;
        vector<int> c;

        b.push_back(mini);
        cntmini--;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == mini)
                {
                    if (cntmini == 0)
                        break;

                    else
                    {
                        cntmini--;
                    }
                }
                if (b[j] % a[i] == 0)
                {

                    b.push_back(a[i]);

                    break;
                }
                else
                {
                    c.push_back(a[i]);
                    break;
                }
            }
        }

        if (c.size() == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << b.size() << " " << c.size() << "\n";
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << "\n";
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
        }
    }
    return 0;
}