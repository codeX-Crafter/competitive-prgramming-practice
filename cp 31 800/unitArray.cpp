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
        int cntOne = 0;
        int cntMinusOne = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                cntOne++;
            if (v[i] == -1)
                cntMinusOne++;
        }
        int diff = cntMinusOne - cntOne;
        if (cntOne == cntMinusOne)
        {
            if (cntMinusOne % 2 == 0)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
        else if (cntOne > cntMinusOne)
        {
            if (cntMinusOne % 2 == 0)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
        else
        {
            int opts = 0;
            while (cntMinusOne % 2 != 0 || cntMinusOne > cntOne)
            {
                cntMinusOne--;
                cntOne++;
                opts++;
            }
            cout << opts << "\n";
        }
    }
    return 0;
}