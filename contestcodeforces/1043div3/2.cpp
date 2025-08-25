#include <bits/stdc++.h>
using namespace std;
#define int long long

// upsolve kiya h MATHS MATHS MATHS!!!!!!

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;

        int curr = 10;
        while (curr <= n)
        {
            if (n % (curr + 1) == 0)
            {
                ans.push_back((n / (1 + curr)));
                // cout << ans.size() << endl;
            }
            curr *= 10;
        }
        sort(ans.begin(), ans.end());
        if (ans.size() == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}