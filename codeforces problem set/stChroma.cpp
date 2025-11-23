#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i;
        }

        if (x >= n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            swap(v[x], v[n - 1]);
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}