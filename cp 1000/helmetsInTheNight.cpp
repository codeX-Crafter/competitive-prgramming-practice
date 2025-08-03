#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, p;
        cin >> n >> p;
        vector<int> a;
        vector<int> b;
        // vector<int> c(n);
        multimap<int, int> c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            c.insert({b[i], a[i]});
        }

        long long cost = p;
        long long ppl = 1;
        // for (auto &it : c)
        // {
        //     cout << it.first << " " << it.second << "\n";
        // }

        for (auto &it : c)
        {
            if (ppl != n)
            {
                if (it.first < p)
                {
                    while (it.second != 0 && ppl != n)
                    {
                        cost += it.first;
                        ppl++;
                        it.second--;
                        // cout << cost << endl;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        // cout << cost << endl;

        if (ppl != n)
        {
            long long people = n - ppl;
            cost += (p * people);
        }
        cout << cost << endl;
    }

    return 0;
}