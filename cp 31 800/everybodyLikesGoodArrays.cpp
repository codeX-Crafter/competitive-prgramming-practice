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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int oddC = 0;
        int evenC = 0;
        int opts = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                oddC = 0;
                evenC++;
                if (evenC > 1)
                    opts++;
            }
            else
            {
                evenC = 0;
                oddC++;
                if (oddC > 1)
                    opts++;
            }
        }
        cout << opts << "\n";
    }
    return 0;
}
