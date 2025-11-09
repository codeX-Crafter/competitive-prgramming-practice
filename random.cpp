#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<int, int>> monsters(m);
    for (int i = 0; i < m; i++)
        cin >> monsters[i].first;
    for (int i = 0; i < m; i++)
        cin >> monsters[i].second;

    sort(a.begin(), a.end());
    sort(monsters.begin(), monsters.end()); // sorted by life

    multiset<int> swords(a.begin(), a.end());

    int kills = 0;

    for (auto &mon : monsters)
    {
        int life = mon.first;
        int gain = mon.second;

        auto it = swords.lower_bound(life);

        if (it != swords.end())
        {
            int sword = *it;
            swords.erase(it);

            // After kill
            if (gain > 0)
            {
                swords.insert(max(sword, gain));
            }
            kills++;
        }
    }

    cout << kills << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
        solve();
}
