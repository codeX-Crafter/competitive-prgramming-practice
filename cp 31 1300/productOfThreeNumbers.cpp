#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> factorize(long long n)
{
    vector<int> factors;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                // cnt++;
                factors.push_back(i);
            }
        }
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v = factorize(n);
        int ans = v.size();
        bool poss = (ans >= 3);
        if (poss)
        {

            if (ans == 3)
            {
                if (v[1] != v[0] && v[1] != v[2] && v[0] != v[2])
                {
                    cout << "YES\n";
                    cout << v[0] << " " << v[1] << " " << v[2] << "\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if (ans == 4 || ans == 5)
            {
                int unique = 1;
                for (int i = 1; i < v.size(); i++)
                {
                    if (v[i] != v[i - 1])
                    {
                        unique++;
                    }
                }
                // cout << unique << endl;
                if (unique >= 2)
                {
                    cout << "YES\n";
                    cout << v[0] << " ";
                    if (ans == 4)
                    {
                        cout << v[1] * v[2] << " " << v[3] << endl;
                    }
                    else
                    {

                        int pro = 1;
                        cout << v[1] * v[2] * v[3] << " " << v[4] << endl;
                    }
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "YES\n";
                cout << v[0] << " " << v[1] * v[2] << " ";
                int pro = 1;
                for (int i = 3; i < v.size(); i++)
                {
                    pro *= v[i];
                }
                cout << pro << endl;
            }
        }
        else
        {
            cout << "NO\n";
        }

        // cout << endl;
        // cout << poss << endl;
    }
    return 0;
}

