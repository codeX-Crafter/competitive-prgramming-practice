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
        int l = 0;
        int r = n - 1;
        // if(v[l]!=r)
        int ele1, ele2, ele;
        bool possible = true;
        int cnt = 0;
        while (l < r)
        {

            if (v[l] != v[r] && cnt == 0)
            {
                ele1 = v[l];
                ele2 = v[r];
                cnt = 1;
            }
            else if (v[l] != v[r] && (v[l] == ele1 || v[l] == ele2))
            {
                if (v[l] == ele1)
                {
                    ele = ele1;
                    ele2 = -1;
                }
                if (v[l] == ele2)
                {
                    ele = ele2;
                    ele1 = -1;
                }
            }
            else if (v[l] != v[r] && (v[r] == ele1 || v[r] == ele2))
            {
                if (v[r] == ele1)
                {
                    ele = ele1;
                    ele2 = -1;
                }
                if (v[r] == ele2)
                {
                    ele = ele2;
                    ele1 = -1;
                }
            }
            else if (v[l] == v[r])
            {
                possible = true;
            }
            else
            {
                possible = false;
                break;
            }
            l++;
            r--;
        }
        if (possible && ((ele1 < 0 && ele2 >= 0) || (ele1 >= 0 && ele2 < 0)))
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