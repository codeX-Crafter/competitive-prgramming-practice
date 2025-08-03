#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second < b.second;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % k == 0)
            {
                v[i] = k;
            }
            else
            {
                v[i] = (v[i] % k);
            }
        }
        vector<pair<int, int>> indexStore;
        for (int i = 0; i < n; i++)
        {
            indexStore.push_back({v[i], i + 1});
        }
        sort(indexStore.begin(), indexStore.end(), cmp);
        for (int i = 0; i < n; i++)
        {
            cout << indexStore[i].second << " ";
        }
        cout << "\n";
    }
    return 0;
}