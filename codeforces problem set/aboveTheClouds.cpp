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

        // create vetor of len 26 bcoz 26 alphabets possible then use it as a has array for the alphabets present on the string s
        vector<int> cntVector(26, 0);

        // Converts the character c to an index between 0 and 25 using c - 'a'.
        // hashing
        for (auto c : s)
            cntVector[c - 'a']++;
        // flag
        int flag = 0;

        for (int i = 0; i < 26; i++)
        {
            if (cntVector[i] > 2)
                flag = 1;
            else if (cntVector[i] == 2 && (s[0] - 'a' != i || s[n - 1] - 'a' != i))
                flag = 1;
        }
        if (flag == 1)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    return 0;
}