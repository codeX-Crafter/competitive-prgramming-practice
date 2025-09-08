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
        int a = (1LL << k);
        int b = (1LL << k);
        vector<int> v;
        while ((x != b && x != a))
        {
            if (a == b && b % 2 == 0)
            {
                a = (a + (b / 2));
                b = b / 2;
                int bee = 2;
                v.push_back(bee);
                // cout << "aaaaaaa " << endl;
            }
            else if (((a + (b / 2)) % x == 0 || (b / 2) % x == 0) && b % 2 == 0)
            {
                a = (a + (b / 2));
                b = b / 2;
                int bee = 2;
                v.push_back(bee);
                // cout << "bbbb " << endl;
            }
            else if ((((b + (a / 2)) % x == 0 || (a / 2) % x == 0) && a % 2 == 0))
            {
                b = (b + (a / 2));
                a = a / 2;
                int aaa = 1;

                v.push_back(aaa);
                // cout << "cccc " << endl;
            }
            else if (a >= b && a % 2 == 0)
            {
                b = (b + (a / 2));
                a = a / 2;
                int aaa = 1;

                v.push_back(aaa);
            }
            else if (a < b && b % 2 == 0)
            {
                a = (a + (b / 2));
                b = b / 2;
                int bee = 2;
                v.push_back(bee);
            }
        }
        cout << v.size() << endl;
        int one = 1;
        int two = 2;
        if (x == b)
        {
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
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}