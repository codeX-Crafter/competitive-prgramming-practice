#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        // cout << "hellllllooooo" << "\n ";

        string s;
        b = b + 1;

        int val = ceil((double)r / ((double)b));
        int haha = r / b;
        int rem = r % b;
        for (int i = 0; i < n; i++)
        {
            s.push_back('R');
        }
        // cout << s << "\n";
        int value = val;
        b = b - 1;
        if (b == 1)
        {
            s[(n / 2)] = 'B';
        }
        else
        {
            s[val] = 'B';
            b--;
            rem--;
            while (rem > 0 && b > 0)
            {
                value += val + 1;
                s[value] = 'B';
                b--;
                rem--;
            }
            // cout << s << "\n";

            while (b > 0)
            {
                value += haha + 1;
                s[value] = 'B';
                b--;
            }
        }

        cout << s << "\n";
    }
    return 0;
}