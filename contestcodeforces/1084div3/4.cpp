#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        x--;
        y--;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        vector<int> A, B;
        for (int i = 0; i < n; i++)
        {
            if (i > x && i <= y)
                A.push_back(p[i]);
            else
                B.push_back(p[i]);
        }

        int k = min_element(A.begin(), A.end()) - A.begin();
        rotate(A.begin(), A.begin() + k, A.end());

        int mn = A[0];

        int pos = B.size();
        for (int i = 0; i < (int)B.size(); i++)
        {
            if (B[i] > mn)
            {
                pos = i;
                break;
            }
        }

        vector<int> ans;
        for (int i = 0; i < pos; i++)
            ans.push_back(B[i]);
        for (int v : A)
            ans.push_back(v);
        for (int i = pos; i < (int)B.size(); i++)
            ans.push_back(B[i]);

        for (int v : ans)
            cout << v << " ";
        cout << "\n";
    }
    return 0;
}