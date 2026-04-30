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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> six, two, ex, three;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 6 == 0)
            {
                six.push_back(v[i]);
            }
            else if (v[i] % 2 == 0)
            {
                two.push_back(v[i]);
            }
            else if (v[i] % 3 == 0)
            {
                three.push_back(v[i]);
            }
            else
            {
                ex.push_back(v[i]);
            }
        }

        six.insert(six.end(), two.begin(), two.end());
        six.insert(six.end(), ex.begin(), ex.end());
        six.insert(six.end(), three.begin(), three.end());

        for (int i = 0; i < n; i++)
        {
            cout << six[i] << " ";
        }
        cout << endl;
    }
    return 0;
}