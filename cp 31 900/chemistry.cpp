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
        cin >> s;
        bool flag = true;
        int cntOdd = 0;
        vector<int> hash(26);
        for (int i = 0; i < n; i++)
        {
            hash[(s[i] - 'a')]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] % 2 != 0)
            {
                cntOdd++;
            }
        }
        if (cntOdd > k + 1)
        {
            flag = false;
        }

        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}