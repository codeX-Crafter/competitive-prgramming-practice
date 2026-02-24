#include <bits/stdc++.h>
using namespace std;
#define int long long

void fun(int idx, vector<int> &temp, vector<int> &v, int n)
{
    if (idx == n)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }

    temp.push_back(v[idx]);
    fun(idx + 1, temp, v, n);  // pick
    temp.pop_back();
    fun(idx + 1, temp, v, n);   // not pick
}

// Time: O(2ⁿ · n) (printing dominates)
// Space: O(n) recursion stack + temp vector

signed main()
{
    int n = 3;
    vector<int> v(n);
    v = {1, 2, 3};
    vector<int> temp;
    fun(0, temp, v, n);

    return 0;
}