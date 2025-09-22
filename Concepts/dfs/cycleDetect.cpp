#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
vector<int> g[N];

bool dfs(int vertex, int parent)
{
    bool isCycle = false;
    vis[vertex] = true;
    for (auto child : g[vertex])
    {
        if (vis[child] && child == parent)
            continue;
        if (vis[child])
            return true;

        isCycle |= dfs(child, vertex);
    }
    return isCycle;
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isCycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        if (dfs(i, 0))
        {
            isCycle = true;
            break;
        }
    }

    cout << isCycle << endl;

    return 0;
}