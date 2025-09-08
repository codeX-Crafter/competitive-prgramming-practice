#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;
        int b = ((2 * (1LL << k)) - x);
        int a = x;
        vector<int> v;
        // bool poss = false;
        // cout << "a " << a << "b " << b << endl;
        for (int i = 1; i <= 120; i++)
        {
            // cout << "a " << a << "b " << b << endl;

            if (a == b)
            {
                // cout << "hehe";
                // poss = true;
                break;
            }
            else if (a > b)
            {
                a = a - b;
                b = b * 2;
                int aaa = 1;
                v.push_back(aaa);
                // cout << "wowiee " << endl;
            }
            else
            {
                b = b - a;
                a = a * 2;
                int bee = 2;
                v.push_back(bee);
                // cout << "huh " << endl;
            }
        }
        cout << v.size() << endl;
        // cout << poss << endl;
        int one = 1;
        int two = 2;
        // if (x == a)
        // {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == two)
            {
                v[i] = one;
            }
            else if (v[i] == one)
            {
                v[i] = two;
            }
        }
        // }
        int n = v.size();
        for (int i = 0; i < n / 2; i++)
        {
            swap(v[i], v[n - i - 1]);
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}