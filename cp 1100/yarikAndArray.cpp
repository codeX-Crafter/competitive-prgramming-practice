#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = v[0];
        int sumM = v[0];

        for (int i = 1; i < n; i++)
        {
            if ((v[i] + v[i - 1]) % 2 != 0)
            {
                // if (sum + v[i] > sum)
                sum += v[i];
                if (v[i] > sum)
                    sum = v[i];
            }
            else
            {
                sum = v[i];
            }
            sumM = max(sum, sumM);
        }
        cout << sumM << endl;
    }
    return 0;
}