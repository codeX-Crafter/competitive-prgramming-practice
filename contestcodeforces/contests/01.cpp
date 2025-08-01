#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int p = n;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > c)
            {
                // cout << v[i] << "\n";
                p = i;
                v[i] = 0;
                break;
            }
        }
        for (int i = n - 1; i >= p; i--)
        {
            v[i] = 0;
        }

        // cout << "p " << p << "\n";

        int coins = n - p;
        // cout << "coins " << coins << "\n";

        for (int i = p - 1; i >= 0; i--)
        {
            // cout << "vi" << v[i] << "\n";
            if (v[i] == 0)
            {
                // cout << "move1" << "\n";
                continue;
            }
            if (v[i] > c)
            {
                // cout << "move2" << "\n";

                coins++;
                // cout << "coins " << coins << "\n";
                v[i] = 0;
                // if (i > 0)
                // {

                //     v[i - 1] = 0;
                // }
                int ii = i;
                if (ii > 0)
                {
                    for (int k = ii - 1; k >= 0; k--)
                    {
                        if (v[k] > c)
                        {
                            coins++;
                            v[k] = 0;
                        }
                        else
                        {
                            v[k] = 0;
                            break;
                        }
                    }
                }

                for (int j = 0; j < i; j++)
                {
                    v[j] = v[j] * 2;
                }
            }
            else
            {
                // cout << "move3" << "\n";

                v[i] = 0;
                for (int j = 0; j < i; j++)
                {
                    v[j] = v[j] * 2;
                }
            }
        }

        cout << coins << "\n";
    }
    return 0;
}