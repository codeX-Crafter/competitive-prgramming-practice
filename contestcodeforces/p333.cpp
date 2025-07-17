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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int target = v[k - 1];
        sort(v.begin(), v.end());
        int height = target;
        int wl = 1;
        bool flag = true;

        while (height != v[n - 1])
        {
            int heightb = *upper_bound(v.begin(), v.end(), height);
            if ((heightb - height) <= (height - wl + 1))
            {
                wl += (heightb - height);
                height = heightb;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}

// cout << *upper_bound(v.begin(), v.end(), height);