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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int index = -1;
        for (int i = 0; i < n; i++)
        {
            int productleft = 1;
            for (int j = 0; j <= i; j++)
            {
                productleft *= v[j];
            }
            int productRight = 1;
            for (int k = i + 1; k < n; k++)
            {
                productRight *= v[k];
            }
            if (productleft == productRight)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
            cout << index << "\n";
        else
        {
            cout << index + 1 << "\n";
        }
    }
    return 0;
}