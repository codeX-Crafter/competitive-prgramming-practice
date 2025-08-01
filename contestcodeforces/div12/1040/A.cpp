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
        vector<int> v(n);
        long long sum = 0;
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] == 0)
            {
                zero++;
            }
            if (v[i] == 1)
            {
                one++;
            }
        }

        sum += min(one, zero);
        if (zero > one)
        {
            sum += (zero - one);
        }
        cout << sum << "\n";
    }
    return 0;
}
