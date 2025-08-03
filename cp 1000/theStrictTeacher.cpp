#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teacher(m + 1);
        for (int i = 1; i <= m; i++)
        {
            cin >> teacher[i];
        }
        int david;
        cin >> david;
        bool flagl = true;
        bool flagr = true;
        bool flags = false;
        int left = abs(david - 1);
        int right = abs(david - n);
        vector<int> space;

        for (int i = 1; i <= m; i++)
        {
            int diff = abs(teacher[i] - david);
            if (teacher[i] == david)
            {
                flags = true;
            }
            else if (teacher[i] < david)
            {
                flagl = false;
                left = min(diff, left);
            }
            else
            {
                flagr = false;
                right = min(diff, right);
            }
        }
        int steps;

        if (flags)
        {
            steps = 0;
        }
        else if (flagl || flagr)
        {
            steps = left + right;
        }
        else
        {
            int paramin = min(left, right);
            int paramax = max(left, right);
            steps = paramin + ((paramax - paramin) / 2);
        }
        cout << steps << "\n";
    }
    return 0;
}