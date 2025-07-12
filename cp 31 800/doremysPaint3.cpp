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
        vector<int> v(n);
        map<int, int> freq;

        for (int &x : v)
        {
            cin >> x;
            freq[x]++;
        }

        if (freq.size() > 2)
        {
            cout << "no\n";
        }
        else if (freq.size() == 1)
        {
            cout << "yes\n";
        }
        else
        {
            int a = freq.begin()->second;
            int b = next(freq.begin())->second;
            int limit = (n + 1) / 2;
            if (a <= limit && b <= limit)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
    }
    return 0;
}
