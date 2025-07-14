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
        int minGap = INT_MAX;
        int isSorted = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (i != 0)
            {
                int gap = (v[i] - v[i - 1]);

                if (gap < 0)
                    isSorted = false;

                minGap = min(minGap, gap);
            }
        }
        if (minGap == 0)
        {
            cout << 1 << "\n";
        }
        else if (!isSorted)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << (minGap / 2) + 1 << "\n";
        }
    }
    return 0;
}