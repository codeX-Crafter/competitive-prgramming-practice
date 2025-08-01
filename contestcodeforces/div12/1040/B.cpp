#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, s;
        cin >> n >> s;
        vector<int> v(n);
        long long sum = 0;
        int one = 0;
        int two = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] == 1)
                one++;
            if (v[i] == 2)
                two++;
        }
        int zero = n - one - two;
        if (sum > s)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else if (s == sum + 1)
        {
            for (int i = 0; i < n; i++)
            {

                if (i < zero)
                {
                    v[i] = 0;
                }
                else if (i < two + zero)
                {
                    v[i] = 2;
                }
                else if (i < one + zero + two)
                {
                    v[i] = 1;
                }
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}