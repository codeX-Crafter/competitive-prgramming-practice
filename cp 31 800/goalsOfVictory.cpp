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
        int sum = 0;
        vector<int> v(n);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int ans = 0 - sum;
        cout << (ans) << "\n";
    }

    return 0;
}