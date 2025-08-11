#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;

        int differenceA = 0;
        int differenceB = 0;
        int differenceC = 0;
        int differenceD = 0;

        int a;
        cin >> a;
        vector<int> aa(a);
        for (int i = 0; i < a; i++)
        {
            cin >> aa[i];
        }
        differenceA = aa[a - 1] - aa[0];

        int b;
        cin >> b;
        vector<int> bb(b);
        for (int i = 0; i < b; i++)
        {
            cin >> bb[i];
        }
        differenceB = bb[b - 1] - bb[0];

        int max1 = max(differenceA, differenceB) * h;

        int c;
        cin >> c;
        vector<int> cc(c);
        for (int i = 0; i < c; i++)
        {
            cin >> cc[i];
        }
        differenceC = cc[c - 1] - cc[0];

        int d;
        cin >> d;
        vector<int> dd(d);
        for (int i = 0; i < d; i++)
        {
            cin >> dd[i];
        }
        differenceD = dd[d - 1] - dd[0];

        int max2 = max(differenceC, differenceD) * w;

        cout << max(max1, max2) << endl;
    }
    return 0;
}