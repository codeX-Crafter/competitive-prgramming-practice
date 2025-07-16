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
        vector<int> v(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i];
        }
        if (n % 2 != 0)
        {
            int x = 0;
            for (int i = 1; i < n + 1; i++)
            {
                x ^= v[i];
            }
            cout << x << "\n";
        }
        else
        {
            int XOR = v[1];
            for (int i = 2; i < n + 1; i++)
            {
                XOR ^= v[i];
            }
            if (XOR == 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}
