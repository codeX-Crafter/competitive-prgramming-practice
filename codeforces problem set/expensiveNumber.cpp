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
        int index;
        int cnt0 = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] > '0')
            {
                index = i;
                break;
            }
        }

        for (int k = 0; k < index; k++)
        {
            if (s[k] == '0')
                cnt0++;
        }
        string ss = "";
        for (int j = 0; j < cnt0; j++)
        {
            ss += '0';
        }
        ss += s[index];
        cout << s.length() - ss.length() << "\n";
    }
}