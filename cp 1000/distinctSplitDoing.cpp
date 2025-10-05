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

        vector<int> right(26, 0), left(26, 0);

        for (char ch : s)
        {
            right[ch - 'a']++;
        }

        int maxDistinct = 0;

        for (int i = 0; i < n; i++)
        {
            int index = s[i] - 'a';
            right[index]--;
            left[index]++;

            int currentCount = 0;
            for (int j = 0; j < 26; j++)
            {
                if (left[j] > 0)
                    currentCount++;
                if (right[j] > 0)
                    currentCount++;
            }

            maxDistinct = max(maxDistinct, currentCount);
        }

        cout << maxDistinct << "\n";
    }
    return 0;
}