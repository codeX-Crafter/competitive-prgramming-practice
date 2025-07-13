#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int cnt = 0;
        bool flag = false;
        for (int i = 0; i <= 5; i++)
        {

            if (x.find(s) != -1)
            {
                flag = true;
                break;
            }
            x += x;
            cnt++;
        }
        if (flag)
            cout << cnt << "\n";
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}

// substring in cpp gfg

// Extract two characters of s1 (starting
// from index 3)

// string sub = s.substr(3, 2);

// x.substr(i,m)