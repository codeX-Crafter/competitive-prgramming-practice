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
        bool isSorted = true;
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            if (v[i] < v[i - 1] && i > 0)
            {
                isSorted = false;
            }
        }

        if (isSorted)
        {
            cout << "Yes" << "\n";
        }
        else if (!isSorted)
        {
            if (k >= 2)
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            }
        }
    }
    return 0;
}

// this was my initial approach wherein I guess (I am sure now ) I got it wrong
// int count = 0;
//         int maxcnt = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {

//             cin >> v[i];
//             if (v[i] < v[i - 1] && i > 0)
//             {
//                 count++;
//                 maxcnt = max(maxcnt, count);
//             }
//             else if (v[i] >= v[i - 1] && i > 0)
//             {
//                 count = 0;
//             }
//         }

//         if (maxcnt >= 1 && k == 1)
//         {
//             cout << "NO" << "\n";
//         }
//         else if (maxcnt > k)
//         {
//             cout << "NO" << "\n";
//         }
//         else
//         {
//             cout << "YES" << "\n";
//         }