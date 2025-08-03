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
        string z;
        cin >> z;
        long long ans = 2;
        string s;
        for (int i = 0; i < n; i++)
        {
            long long count = 2;
            s = z;
            int ele = s[0];
            sort(s.begin(), s.begin() + i + 1);
            // cout << s << "\n";
            for (int k = 0; k < i + 1; k++)
            {
                // cout << "ele " << ele << endl;
                if (s[k] != ele)
                {
                    ele = s[k];
                    count++;
                    // cout << "count " << count << endl;
                }
            }
            // cout << "count " << count << endl;

            ele = s[i + 1];
            sort(s.begin() + i + 1, s.end());
            // cout << s << "\n";

            for (int j = i + 1; j < n; j++)
            {
                // cout << "ele " << ele << endl;
                if (s[j] != ele)
                {
                    ele = s[j];
                    count++;
                    // cout << "count2 " << count << endl;
                }
            }

            // cout << "count2 " << count << endl;
            ans = max(count, ans);
            // cout << "ans " << ans << endl;
        }

        cout << ans << endl;
    }
    return 0;
}