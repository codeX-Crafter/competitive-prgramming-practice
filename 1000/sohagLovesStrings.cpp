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
        int n = s.size();
        if (n == 1)
        {
            cout << -1;
        }
        else if (n % 2 == 0)
        {
            cout << s << "\n";
        }
        else
        {
            s[n - 1] = 0;
            cout << s << "\n";
        }
    }
    return 0;
}