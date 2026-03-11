#include <bits/stdc++.h>
using namespace std;
#define int long long

int trailZ(int x)
{
    string s = to_string(x);
    int sol = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            sol++;
        else
        {
            break;
        }
    }
    return sol;
}
int lent(int y)
{
    string s = to_string(y);

    return s.size();
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        vector<int> z(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int var = 0;
        for (int i = 0; i < n; i++)
        {
            var += lent(v[i]);
            z[i] = trailZ(v[i]);
        }
        sort(z.begin(), z.end());
        int ans = 0;
        for (int i = n - 1; i >= 0; i -= 2)
        {
            ans += z[i];
        }
        if((m + 1 <= (var - ans))){
            cout<<"Sasha\n";
        }else{
            cout<<"Anna\n";
        }
        // cout << var - ans << " " << m + 1 <<" "<< (m + 1 <= (var - ans)) << endl;
    }
    return 0;
}