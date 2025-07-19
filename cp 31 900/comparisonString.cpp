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
        int count1 = 0;
        int max1 = 0;
        int max2 = 0;
        int count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '<')
            {
                count1++;
                max1 = max(max1, count1);
                count2 = 0;
            }
            else
            {
                count2++;
                max2 = max(max2, count2);
                count1 = 0;
            }
        }
        cout << (max(max1, max2) + 1) << "\n";
    }
    return 0;
}