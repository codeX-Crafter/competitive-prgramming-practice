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
        vector<int> v;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int ans = 0;

        for (auto z : s)
        {
            v.push_back(z);
        }
        int curr = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if(i==0){
                curr=1;
            }
            else if (v[i] - v[i - 1] == 1)
            {
                curr++;
            }
            else
            {
                curr = 1;
            }
            // cout << "yo" << curr << endl;

            ans = max(ans, curr);
            // cout << ans << endl;
        }

        cout << ans << endl;
    }
    return 0;
}