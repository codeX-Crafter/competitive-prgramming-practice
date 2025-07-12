#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        int countofDot = 0;
        int maxCnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '#')
            {
                cnt = 0;
            }
            else if (s[i] == '.')
            {
                cnt++;
                countofDot++;
            }
            maxCnt = max(maxCnt, cnt);
        }
        if (maxCnt >= 3)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << countofDot << "\n";
        }
    }
    return 0;
}