#include <bits/stdc++.h>
using namespace std;
#define int long long

void fun(int idx, vector<int> &temp, int s, int target,
         vector<vector<int>> &ans, vector<int> &v)
{
    int n = v.size();

    if (s == target)
    {
        // sort(temp.begin(), temp.end());
        ans.push_back(temp);
        // temp.empty();
        return;
    }
    if (idx == n)
        return;

    if (s > target)
        return;

    temp.push_back(v[idx]);
    s += v[idx];
    fun(idx + 1, temp, s, target, ans, v); // pick

    temp.pop_back();
    s -= v[idx];

    fun(idx + 1, temp, s, target, ans, v); // not pick
}
// Time: O(2ⁿ · n) (printing dominates)
// Space: O(n) recursion stack + temp vector

signed main()
{
    int n = 5;
    vector<int> v(n);
    v = {2, 5, 2, 1, 2};
    int target = 5;
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int s = 0;
    fun(0, temp, s, target, ans, v);

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}