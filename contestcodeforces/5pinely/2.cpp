#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> v(n, vector<char>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        bool poss = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == '#')
                {
                    cnt++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (v[i][j] == '#')
                {
                    if (i + 2 < n && (v[i + 2][j] == '#'))
                    {
                        poss = false;
                    }
                    else if (i - 2 >= 0 && (v[i - 2][j] == '#'))
                        poss = false;
                    else if (j + 2 < n && (v[i][j + 2] == '#'))
                        poss = false;
                    else if (j - 2 >= 0 && (v[i][j - 2] == '#'))
                        poss = false;
                    else if (cnt > 1)
                    {
                        if (i == 1 && j == 0 && v[0][1] == '#' || (i == 0 && j == 1 && v[1][0] == '#'))
                            continue;
                        if (i == n - 2 && j == 0 && v[n - 1][1] == '#' || (i == n - 1 && j == 1 && v[n - 2][0] == '#'))
                            continue;
                        if (i == 0 && j == n - 2 && v[1][n - 1] == '#' || (i == 1 && j == n - 1 && v[0][n - 2] == '#'))
                            continue;
                        if (i == n - 1 && j == n - 2 && v[n - 2][n - 1] == '#' || (i == n - 2 && j == n - 1 && v[n - 1][n - 2] == '#'))
                            continue;
                        if (((i + 2 < n && (v[i + 2][j] != '#')) && (i - 2 >= 0 && (v[i - 2][j] != '#'))) && ((j + 2 < n && (v[i][j + 2] != '#')) && (j - 2 >= 0 && (v[i][j - 2] != '#'))))
                            poss = false;
                    }
                }
            }
        }

        if (poss)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}