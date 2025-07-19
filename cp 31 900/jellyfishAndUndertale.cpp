#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long sum = b;
        for (int i = 0; i < n; i++)
        {
            sum += min((v[i]), (a - 1));
        }
        cout << sum << "\n";
    }
    return 0;
}