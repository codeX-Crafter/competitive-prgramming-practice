#include <bits/stdc++.h>
using namespace std;
#define int long long

// good thi bhai yeh problem toh
// k==2 tk toh pahunch gyi thi powers of 2 click nhi kiya the intution required was spot on
signed main()
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
        int odd = 0;
        int even = 0;

        int k = -1;
        for (int i = 1; i < 60; i++)
        {
            bool possible = true;
            int ele1 = (-1);
            int ele2 = (-1);
            // int power=pow(2,i);
            // cout << "ls " << (1 << i) << endl;
            for (int j = 0; j < n; j++)
            {
                if (ele1 == (-1))
                {
                    ele1 = v[j] % (1LL << i);
                }
                else if ((ele2 == (-1)) && ((v[j] % (1LL << i)) != ele1))
                {
                    ele2 = v[j] % (1LL << i);
                }
                else if ((v[j] % (1LL << i)) != ele1 && (v[j] % (1LL << i)) != ele2)
                {
                    possible = false;
                    break;
                }
            }
            // cout << "ele1 " << ele1 << endl;
            // cout << "ele2 " << ele2 << endl;

            if (possible && ((ele1 != ele2) && (ele2 != -1 && ele1 != -1)))
            {
                k = (1LL << i);
                break;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        cout << k << endl;
    }
    return 0;
}