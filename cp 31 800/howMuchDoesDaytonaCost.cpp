#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool flag = false;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "Yes\n";
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}