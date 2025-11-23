#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans;
        if (s > v[n - 1])
        {
            ans = s - v[0];
        }
        else if (s <= v[n - 1])
        {
            if (s <= v[0])
            {
                ans = v[n - 1] - s;
            }
            else
            {
                int leftDist = s - v[0];
                int rightDist = v[n - 1] - s;
                if (rightDist >= leftDist)
                {
                    ans = 2 * leftDist + rightDist;
                }
                else if (rightDist < leftDist)
                {
                    ans = 2 * rightDist + leftDist;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}