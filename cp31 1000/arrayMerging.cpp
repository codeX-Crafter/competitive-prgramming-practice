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
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<int> c;

        int ele = a[0];
        for (int i = 0; i < 2 * n; i++)
        {
            if (a[i] == ele)
            {
                c.push_back(a[i]);
            }
            else
            {
                c.push_back(b[i]);
                ele = b[i];
            }
        }
        for (int i = 0; i < 2 * n; i++)
        {
            cout << c[i] << " ";
        }
    }
    return 0;
}