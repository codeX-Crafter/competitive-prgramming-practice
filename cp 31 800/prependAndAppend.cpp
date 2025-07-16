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
        string v;
        cin >> v;
        int cnt = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (v[i] != v[n - i - 1])
            {
                cnt += 2;
            }
            else
            {
                break;
            }
        }
        cout << n - cnt << "\n";
    }
    return 0;
}