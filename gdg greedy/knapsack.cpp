#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<double, pair<double, int>> &a, pair<double, pair<double, int>> &b)
{
    if (a.first > b.first)
    {
        return true;
    }
    else
        return false;
}

signed main()
{
    int n;
    cin >> n;
    double capacity;
    cin >> capacity;
    vector<pair<double, pair<double, int>>> v(n);
    for (int i = 0; i < n; i++)
    {
        int profit;
        int w;
        cin >> profit >> w;
        v[i].second.first = profit;
        v[i].second.second = w;
        v[i].first = (profit / w);
    }
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].second.first << " " << v[i].second.second << endl;
    }

    double maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        double profit = v[i].second.first;
        int w = v[i].second.second;

        if (capacity != 0)
        {

            if (capacity - w <= 0)
            {
                double pro = (capacity / w);

                maxProfit += (profit * pro);

                capacity = 0;
            }
            else
            {
                maxProfit += profit;

                capacity -= w;
            }
        }
        // cout << "p " << maxProfit << endl;
        // cout << capacity << endl;
    }
    cout << maxProfit << endl;

    return 0;
}