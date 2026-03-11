#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(int &a, int &b)
{
    return a > b;
}

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
        int a = 0;
        int b = 0;
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[v[i]]++;
        }
        vector<int> odd;
        vector<int> one;

        vector<int> even;
        for (auto &p : mpp)
        {
            if (p.second == 1)
            {
                one.push_back(p.first);
            }
            else if (p.second % 2 != 0)
            {
                odd.push_back(p.first);
            }
            else
            {
                even.push_back(p.first);
            }
        }
        int es = accumulate(even.begin(), even.end(), 0LL);
        int os = accumulate(odd.begin(), odd.end(), 0LL);
        int m = one.size();
        bool al = false;
        sort(one.begin(), one.end(), cmp);

        // for (int i = 0; i < odd.size(); i++)
        // {
        //     cout << odd[i] << " ";
        // }
        // cout << endl;

        // 1 1 1 2 2 3 3 3 4 4

        for (int i = 0; i < m; i++)
        {
            if (i % 2 == 0)
            {
                al = true;
                a += one[i];
            }
            else
            {
                al = false;
                b += one[i];
            }
        }
        // cout << al << endl;
        // cout << a << " " << b << endl;

        if (odd.size() == 0)
        {
            if (al)
            {
                a += es;
            }
            else
            {
                b += es;
            }
        }
        else if (odd.size() % 2 != 0)
        {
            if (al)
            {
                a += os;
                a += es;
            }
            else
            {
                b += os;
                b += es;
            }
        }
        else
        {
            if (!al)
            {
                a += os;
                a += es;
            }
            else
            {
                b += os;
                b += es;
            }
        }

        cout << a << " " << b << endl;
    }
    return 0;
}