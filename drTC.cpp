#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<string> pairs(n);
        for (int i = 0; i < n; i++)
        {
            string temp = s;
            if (temp[i] == '0')
            {
                temp[i] = '1';
            }
            else if (temp[i] == '1')
            {
                temp[i] = '0';
            }
            pairs[i] = temp;
        }
        int cnt = 0;
        for (int i = 0; i < pairs.size(); i++)
        {
            for (int j = 0; j < pairs[i].size(); j++)
            {
                if (pairs[i][j] == '1')
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}