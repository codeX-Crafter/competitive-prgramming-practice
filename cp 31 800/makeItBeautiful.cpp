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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (v[0] != v[i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "No\n";
        }

        else
        {
            cout << "Yes\n";
            sort(v.begin(), v.end());
            swap(v[0], v[n - 1]);
            sort(v.begin() + 1, v.end());
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}