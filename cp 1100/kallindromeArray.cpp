#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

signed main()
{
    fast_io int t;
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
        int l = 0;
        int r = n - 1;
        // if(v[l]!=r)

        int ele1 = -1;
        int ele2 = -1;
        bool possible = true;

        while (l < r)
        {

            if (v[l] != v[r])
            {
                ele1 = v[l];
                ele2 = v[r];
                possible = false;
                break;
            }

            l++;
            r--;
        }

        l = 0;
        r = n - 1;
        bool one = true;
        while (l < r)
        {
            while (v[l] == ele1 && (l < r))
            {
                l++;
            }
            while (v[r] == ele1 && (l < r))
            {
                r--;
            }
            if (l < r)
                if (v[l] != v[r])
                {
                    one = false;
                }
            l++;
            r--;
        }
        l = 0;
        r = n - 1;
        bool two = true;
        while (l < r)
        {
            while (v[l] == ele2 && (l < r))
            {
                l++;
            }
            while (v[r] == ele2 && (l < r))
            {
                r--;
            }
            if (l < r)
                if (v[l] != v[r])
                {
                    two = false;
                }
            l++;
            r--;
        }

        // if (possible && ((ele1 < 0 && ele2 >= 0) || (ele1 >= 0 && ele2 < 0)))
        // {
        //     cout << "YES\n";
        // }
        // else if (possible && (n <= 2 || (ele1 == -1 && ele2 == -1)))
        // {
        //     cout << "YES\n";
        // }
        // cout << possible << endl;

        // cout << one << endl;
        // cout << two << endl;
        if (possible)
        {
            // if (cnt == 1 && n > 3)
            // {
            //     cout << "NO\n";
            // }
            // if (n == 3 && ((ele1 != v[1] && ele2 != v[1]) && (ele1 != -1 && ele2 != -1)))

            cout << "YES\n";
        }
        else if (two == 1 || one == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}