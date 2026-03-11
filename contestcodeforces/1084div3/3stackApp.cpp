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
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        if (st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}