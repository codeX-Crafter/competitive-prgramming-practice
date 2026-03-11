#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        // KEY INSIGHT:
        // Process RIGHT TO LEFT. At step i, the stack (top→bottom) = min
        // constructing sequence for a[i..n-1]. The d-th element from the
        // top was "activated" at push_pos p_d, meaning: the top d elements
        // form the min seq for a[i..p_d], for all r in [p_d, p_{d-1}-1].
        //
        // Therefore: sum_{r=i}^{n-1} f(a[i..r]) = sum of (n - push_pos)
        // over all stack elements. We maintain this as S.
        //
        // Grand total = sum_i S_i = sum over all subsegments of f.

        stack<pair<int, int>> stk; // {value, push_position}
        long long S = 0;           // sum of (n - push_pos) for current stack
        long long answer = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            int v = a[i];

            // Pop while top == v+1:
            // In reverse, "v generated v+1" means v+1 is redundant —
            // it doesn't need to be in the initial sequence separately.
            // Remove its contribution from S.
            while (!stk.empty() && stk.top().first == v + 1)
            {
                S -= (n - stk.top().second);
                stk.pop();
            }

            // Push v at current position i.
            // It contributes (n - i) to S: it's in the min seq for
            // a[i..r] for all r from i to n-1 (until possibly popped later).
            stk.push({v, i});
            S += (n - i);

            // S = sum_{r=i}^{n-1} f(a[i..r])
            // This accounts for all subsegments with left endpoint = i.
            answer += S;
        }

        cout << answer << "\n";
    }
    return 0;
}