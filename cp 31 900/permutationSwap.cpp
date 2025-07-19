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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int GCD = (v[1] - 1);

        for (int i = 2; i <= n; i++)
        {

            GCD = __gcd(GCD, abs(v[i] - i));
        }
        cout << GCD << "\n";
    }

    return 0;
}