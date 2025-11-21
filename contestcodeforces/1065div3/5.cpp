#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;

struct SegMax
{
    int n;
    vector<int> st;
    SegMax(int _n = 0) { init(_n); }
    void init(int _n)
    {
        n = 1;
        while (n < _n)
            n <<= 1;
        st.assign(2 * n, -INF);
    }
    void build(const vector<int> &a)
    { // a is 1-indexed size m (but we pass size n+1)
        for (int i = 1; i < (int)a.size(); ++i)
            st[n + i - 1] = a[i];
        for (int i = n - 1; i >= 1; --i)
            st[i] = max(st[2 * i], st[2 * i + 1]);
    }
    void set_val(int idx, int val)
    { // idx is 1-indexed
        int p = n + idx - 1;
        st[p] = val;
        for (p /= 2; p >= 1; p /= 2)
            st[p] = max(st[2 * p], st[2 * p + 1]);
    }
    int range_max(int L, int R)
    { // 1-indexed inclusive
        if (L > R)
            return -INF;
        L = n + L - 1;
        R = n + R - 1;
        int res = -INF;
        while (L <= R)
        {
            if (L & 1)
                res = max(res, st[L++]);
            if (!(R & 1))
                res = max(res, st[R--]);
            L >>= 1;
            R >>= 1;
        }
        return res;
    }
    // find leftmost index in [L,R] with value > thresh, or -1 if none
    int find_leftmost_greater(int L, int R, int thresh)
    {
        if (L > R)
            return -1;
        return find_rec(1, 1, n, L, R, thresh);
    }
    int find_rec(int node, int nl, int nr, int ql, int qr, int thresh)
    {
        if (nr < ql || nl > qr || st[node] <= thresh)
            return -1;
        if (nl == nr)
            return nl; // found
        int mid = (nl + nr) / 2;
        int left = find_rec(node * 2, nl, mid, ql, qr, thresh);
        if (left != -1)
            return left;
        return find_rec(node * 2 + 1, mid + 1, nr, ql, qr, thresh);
    }
};

struct SegMin
{
    int n;
    vector<int> st;
    SegMin(int _n = 0) { init(_n); }
    void init(int _n)
    {
        n = 1;
        while (n < _n)
            n <<= 1;
        st.assign(2 * n, INF);
    }
    void build(const vector<int> &a)
    {
        for (int i = 1; i < (int)a.size(); ++i)
            st[n + i - 1] = a[i];
        for (int i = n - 1; i >= 1; --i)
            st[i] = min(st[2 * i], st[2 * i + 1]);
    }
    void set_val(int idx, int val)
    {
        int p = n + idx - 1;
        st[p] = val;
        for (p /= 2; p >= 1; p /= 2)
            st[p] = min(st[2 * p], st[2 * p + 1]);
    }
    int range_min(int L, int R)
    {
        if (L > R)
            return INF;
        L = n + L - 1;
        R = n + R - 1;
        int res = INF;
        while (L <= R)
        {
            if (L & 1)
                res = min(res, st[L++]);
            if (!(R & 1))
                res = min(res, st[R--]);
            L >>= 1;
            R >>= 1;
        }
        return res;
    }
    // find leftmost index in [L,R] with value < thresh, or -1
    int find_leftmost_less(int L, int R, int thresh)
    {
        if (L > R)
            return -1;
        return find_rec(1, 1, n, L, R, thresh);
    }
    int find_rec(int node, int nl, int nr, int ql, int qr, int thresh)
    {
        if (nr < ql || nl > qr || st[node] >= thresh)
            return -1;
        if (nl == nr)
            return nl;
        int mid = (nl + nr) / 2;
        int left = find_rec(node * 2, nl, mid, ql, qr, thresh);
        if (left != -1)
            return left;
        return find_rec(node * 2 + 1, mid + 1, nr, ql, qr, thresh);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> p(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            pos[p[i]] = i;
        }

        SegMax segMax(n);
        SegMin segMin(n);
        segMax.build(pos);
        segMin.build(pos);

        vector<char> used(n + 1, false);
        queue<int> q;
        q.push(1);
        used[1] = true;
        // mark 1 visited in segtrees
        segMax.set_val(1, -INF);
        segMin.set_val(1, INF);

        int cnt = 1;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            int pu = pos[u];

            // neighbors with label > u and pos > pos[u]
            while (true)
            {
                int mx = segMax.range_max(u + 1, n);
                if (mx <= pu)
                    break;
                int idx = segMax.find_leftmost_greater(u + 1, n, pu);
                if (idx == -1)
                    break;
                // visit idx
                used[idx] = true;
                segMax.set_val(idx, -INF);
                segMin.set_val(idx, INF);
                q.push(idx);
                ++cnt;
            }

            // neighbors with label < u and pos < pos[u]
            while (true)
            {
                int mn = segMin.range_min(1, u - 1);
                if (mn >= pu)
                    break;
                int idx = segMin.find_leftmost_less(1, u - 1, pu);
                if (idx == -1)
                    break;
                used[idx] = true;
                segMax.set_val(idx, -INF);
                segMin.set_val(idx, INF);
                q.push(idx);
                ++cnt;
            }
        }

        cout << (cnt == n ? "Yes\n" : "No\n");
    }
    return 0;
}
