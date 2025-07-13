#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 9;
        vector<vector<char>> v(10, vector<char>(10));
        int score = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {

            for (int j = 0; j < 10; j++)
            {
                if (v[i][j] == 'X')
                {
                    int ii = (i > 4) ? n - i : i; // Mirror row if needed
                    int jj = (j > 4) ? n - j : j; // Mirror column if needed
                    if (ii == 0 || jj == 0)
                        score += 1;
                    else if ((ii == 1 || jj == 1))
                        score += 2;
                    else if ((ii == 2 || jj == 2))
                        score += 3;
                    else if ((ii == 3 || jj == 3))
                        score += 4;
                    else if ((ii == 4 || jj == 4))
                        score += 5;
                }
            }
        }
        cout << score << "\n";
    }
    return 0;
}

// you can also hardcode the score in another matrix
// int score[10][10] = {
// 	{1,1,1,1,1,1,1,1,1,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,1,1,1,1,1,1,1,1,1}
// };
