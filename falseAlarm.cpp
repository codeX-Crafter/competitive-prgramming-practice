#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> inputVec(n); // initialise size of vector while declaring

        for (int i = 0; i < n; i++)
        {
            cin >> inputVec[i];
        }

        vector<int> v;
        for (int i = 0; i < inputVec.size(); i++)
        {
            if (inputVec[i] == 1)
            {
                v.push_back(i);
            }
        }
        int l = v[0];
        int r = v[v.size() - 1];
        if (x < (r - l + 1))
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}