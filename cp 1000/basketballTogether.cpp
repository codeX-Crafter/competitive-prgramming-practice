#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);

    int teams = 0;
    int playersRemaining = n;
    for (int i = 0; i < n; i++)
    {
        int req = (d / v[i]) + 1;
        if (playersRemaining >= req)
        {
            playersRemaining -= req;
            teams++;
        }
        else
        {
            break;
        }
    }
    cout << teams << endl;
    return 0;
}