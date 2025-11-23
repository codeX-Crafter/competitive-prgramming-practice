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

        string s;

        for (int i = 0; i < k; i++)
        {
            s.push_back('1');
        }
        for (int j = k; j < n; j++)
        {
            s.push_back('0');
        }

        cout << s << '\n';
    }

    return 0;
}