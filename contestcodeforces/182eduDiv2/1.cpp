#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> pre(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            pre[i] = sum;
        }
        // int l = 0;
        // int r = n - 1;
        // while (l < r)
        // {
        //     if(pre[l]==(pre[r]-pre[l])&&(pre[l]==(pre[n-1]-pre[r]%3)))
        //     pre[r]-pre[l]
        // }
        int ans1 = 0;
        int ans2 = 0;
        for (int l = 0; l < n; l++)
        {
            if (ans1 != 0)
                break;
            for (int r = l + 1; r < n; r++)
            {
                if ((((pre[l]) % 3) == ((pre[r] - pre[l]) % 3)) && ((pre[l] % 3) == ((pre[n - 1] - pre[r]) % 3)))
                {
                    // cout << "hi" << endl;
                    ans1 = l + 1;
                    ans2 = r + 1;
                    break;
                }
                else if ((((pre[l]) % 3) != ((pre[r] - pre[l]) % 3)) && ((pre[l] % 3) != ((pre[n - 1] - pre[r]) % 3)) && (((pre[r] - pre[l]) % 3) != ((pre[n - 1] - pre[r]) % 3)))
                {
                    // cout << "hi" << endl;
                    ans1 = l + 1;
                    ans2 = r + 1;
                    break;
                }
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}