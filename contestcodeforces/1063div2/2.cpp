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
        vector<int> v(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> store;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                store.push_back(i + 1);
                cnt++;
            }
        }
        sort(store.begin(), store.end());
        // vector<pair<int, int>> give;

        if (cnt == 0)
        {
            cout << "0\n";
            continue;
        }
        int maxi = store[store.size() - 1];
        int mini = store[0];
        int l = 1;
        int r = n;

        bool done = false;
        int ans = 0;
        // cout << "hi" << v[mini] << " " << v[maxi] << endl;
        while (l < r)
        {
            if (s[l - 1] == '1')
            {
                l++;
                continue;
            }
            if (s[r - 1] == '1')
            {
                r--;
                continue;
            }
            if ((max(v[l], v[r]) > v[maxi]) && (min(v[l], v[r]) < v[mini]))
            {
                cout << "1\n";
                cout << l << " " << r << endl;
                done = true;
                break;
            }
            l++;
            r--;
        }
        if (!done)
        {
            cout << "-1\n";
        }
    }
    return 0;
}