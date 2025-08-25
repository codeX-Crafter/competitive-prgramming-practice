#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        char ele = s[0];
        int cnt = 0;
        int maxCnt = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ele)
            {
                cnt++;
                maxCnt = max(maxCnt, cnt);
            }
            else
            {
                ele = s[i];
                cnt = 1;
            }
        }
        cout << maxCnt << endl;
    }
    return 0;
}
