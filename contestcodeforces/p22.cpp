#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int hikes = 0;
        int count0 = 0;

        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                count0++;
                if (count0 == k + 1)
                {
                    count0 = 0;
                    continue;
                }
                else if (count0 == k)
                {
                    hikes++;
                    // count0 = 0;
                }
            }
            else
            {
                count0 = 0;
            }
        }
        cout << hikes << "\n";
    }
    return 0;
}