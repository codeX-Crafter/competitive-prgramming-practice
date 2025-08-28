#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool possible = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt >= k)
            {
                possible = false;
                break;
            }
        }
        vector<int> v(n);
        int num = 1;
        if (possible)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    v[i] = num;
                    num++;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    v[i] = num;
                    num++;
                }
            }
        }
        if (possible)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
