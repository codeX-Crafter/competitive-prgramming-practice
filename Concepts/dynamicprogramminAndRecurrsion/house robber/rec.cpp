#include <bits/stdc++.h>
using namespace std;
#define int long long

int rec(int index, vector<int> &v)
{
    if (index == 0)
    {
        return v[index];
    }
    if (index < 0)
    {
        return 0;
    }
    int pick = v[index] + rec(index - 2, v);
    int notPick = 0 + rec(index - 1, v);

    return max(pick, notPick);
}

signed main()
{

    vector<int> v;
    int n = v.size();
    cout << rec(n - 1, v);
    return 0;
}