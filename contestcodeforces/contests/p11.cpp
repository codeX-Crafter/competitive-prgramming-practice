#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int mini = INT_MAX;
        // cout << s[n - 1];

        for (int i = 0; i < n; i++)
        {
            mini = min(mini, (s[i] - '0'));
                }
        cout << mini << "\n";
    }
    return 0;
}