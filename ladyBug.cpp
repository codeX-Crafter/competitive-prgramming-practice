// wrong answer check for the test case n=3 a=111 b=000

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
        string a, b;
        cin >> a >> b;
        int cnt1 = 0;
        int cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                cnt1++;
                if (i < n - 1 && b[i + 1] == '0')
                    cnt0++;
                if (i > 0 && b[i - 1] == '0' && a[i - 2] != '1')
                    cnt0++;
            }
        }
        if (cnt1 <= cnt0)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    return 0;
}