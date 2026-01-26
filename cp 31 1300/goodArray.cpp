#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        map<int, int> mpp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            mpp[v[i]]++;
        }
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int ele = v[i];
            sum -= ele;
            mpp[ele]--;
            if (sum % 2 == 0 && mpp[sum / 2])
            {
                ans.push_back(i);
            }
            sum += ele;
            mpp[ele]++;
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}