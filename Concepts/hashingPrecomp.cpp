#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long hash[N];

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
        hash[v[i]]++;
    }

    return 0;
}