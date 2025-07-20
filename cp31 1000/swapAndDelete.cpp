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
        int cnt0 = 0;
        int cnt1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        string t;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (cnt1 > 0)
                {
                    t.push_back(1);
                    cnt1--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (cnt0 > 0)
                {
                    t.push_back(0);
                    cnt0--;
                }
                else
                {
                    break;
                }
            }
        }

        cout << (s.size() - t.size()) << "\n";
    }
    return 0;
}