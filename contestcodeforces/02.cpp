#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        // bool isSorted = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0;
        int r = n - 1;
        string s;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[l] < v[r])
                {
                    s.push_back('L');
                    l++;
                }
                else
                {
                    s.push_back('R');
                    r--;
                }
            }
            else
            {

                if (v[l] > v[r])
                {
                    s.push_back('L');
                    l++;
                }
                else
                {
                    s.push_back('R');
                    r--;
                }
            }
        }

        cout << s << "\n";
    }
    return 0;
}