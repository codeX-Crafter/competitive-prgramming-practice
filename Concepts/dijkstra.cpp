// leetcode network delay times

// O(V+ElogV)

class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<vector<pair<int, int>>> g(n + 1);
        for (auto path : times)
        {
            g[path[0]].push_back({path[1], path[2]});
        }

        int INF = INT_MAX;
        vector<int> dist(n + 1, INF);
        vector<int> vis(n + 1, 0);

        set<pair<int, int>> st;

        int source = k;
        st.insert({0, source});
        dist[source] = 0;

        while (st.size() > 0)
        {
            auto node = *st.begin();
            int v = node.second;
            int distance = node.first;
            st.erase(st.begin());
            if (vis[v])
                continue;
            vis[v] = 1;
            for (auto child : g[v])
            {
                int child_v = child.first;
                int wt = child.second;
                if (dist[v] + wt < dist[child_v])
                {
                    dist[child_v] = dist[v] + wt;
                    st.insert({dist[child_v], child_v});
                }
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] == INF)
                return -1;
            ans = max(ans, dist[i]);
        }
        return ans;
    }
};