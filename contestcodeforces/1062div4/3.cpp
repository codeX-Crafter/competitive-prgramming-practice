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
        int odd = 0;
        int even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        // vector<int> sorted(n);
        // for (int i = 0; i < n; i++)
        // {
        //     sorted[i] = v[i];
        // }
        // sort(sorted.begin(), sorted.end());
        int num = min(odd, even);

        // for (int i = 0; i < n; i++)
        // {
        //     if (v[i] != sorted[i] && num > 0)
        //     {
        //         index = i;
        //         num--;
        //     }
        // }
        if (num >= 1)
        {
            sort(v.begin(), v.end());
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}