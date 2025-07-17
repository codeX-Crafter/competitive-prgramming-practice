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
            int count2left = 0;
            for (int j = 0; j <= i; j++)
            {
                if (v[j] == 2)
                    count2left++;
            }
            int count2Right = 0;
            for (int k = i + 1; k < n; k++)
            {
                if (v[k] == 2)
                    count2Right++;
            }
            if (count2left == count2Right)
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