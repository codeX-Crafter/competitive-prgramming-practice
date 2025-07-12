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
        int n = 10;
        // sorting string in descending order
        sort(s.begin(), s.end(), greater<char>());
        vector<int> hash(10, 0);
        for (int i = 0; i < 10; i++)
        {
            int digit = s[i] - '0';
            hash[digit]++;
        }

        for (int i = 0; i < 10; i++)
        {
            int tempFinal = INT_MAX;
            for (int j = 0; j < n; j++)
            {
                int digit = s[j] - '0';
                if ((digit >= (10 - i - 1)) && (hash[digit] > 0))
                {
                    tempFinal = min(tempFinal, digit);
                }
            }
            if (tempFinal != INT_MAX)
            {
                s[i] = tempFinal + '0';
                hash[tempFinal]--;
            }
        }
        cout << s << "\n";
    }
    return 0;
}