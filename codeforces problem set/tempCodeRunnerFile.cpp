#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n, k;
        string s;
        cin >> s;
        int cnt0, cnt1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 0)
                cnt0++;
            if (s[i] == 1)
                cnt1++;
        }
        // max good pairs
        // cnt0/2 +cnt1/2
        int mx = cnt0 / 2 + cnt1 / 2;

        // minimum good pairs
        int mn = max(cnt0, cnt1) - n / 2;

        // checking if exactly k good pairs will be possible after rearrangement
        if (k <= mx && k - mn % 2 == 0 && k >= mn)
        {
            cout << "yes " << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }

    return 0;
}