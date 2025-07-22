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
        int pos1 = s.find("FFT");
        int pos2 = s.find("NTT");

        // while ((pos1 != string::npos) || (pos2 != string::npos))
        // {
        //     if (pos1 != string::npos)
        //     {

        //         char temp = s[pos1 + 1];
        //         s[pos1 + 1] = s[pos1 + 2];
        //         s[pos1 + 2] = temp;
        //     }

        //     if (pos2 != string::npos)
        //     {

        //         char temp = s[pos2 + 1];
        //         s[pos2 + 1] = s[pos2];
        //         s[pos2] = temp;
        //     }
        //     pos1 = s.find("FFT");
        //     pos2 = s.find("NTT");
        // }
        int start = 0;
        if ((pos1 != string::npos) || (pos2 != string::npos))
        {
            for (int i = 0; i < s.size(); i++)
            {

                if (s[i] == 'T')
                {

                    char temp = s[i];
                    s[i] = s[start];
                    s[start] = temp;
                    start++;
                }
            }
        }

        // if (n % 3 == 0)
        // {
        //     cout << "Second" << "\n";
        // }
        // else
        // {
        //     cout << "First" << "\n";
        // }
        cout << s << "\n";
    }
    return 0;
}