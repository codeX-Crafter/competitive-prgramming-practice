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
        int prev = v[0];
        int ans = n;
        vector<int> answ;
        answ.push_back(prev);
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > prev && v[i] < v[i + 1] || v[i] < prev && v[i] > v[i + 1])
            {
                ans--;
            }
            else
            {

                prev = v[i];
                answ.push_back(prev);
            }
        }
        answ.push_back(v[n - 1]);

        cout << ans << endl;
        if (n == 2)
        {
            cout << v[0] << " " << v[1] << endl;
        }
        else
        {
            for (int i = 0; i < answ.size(); i++)
            {
                cout << answ[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}