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
            v[i] = abs(v[i]);
        }
        int target = v[0];
        sort(v.begin(), v.end());
        int index = n / 2;
        if (target <= v[index])
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}

// code

/*
    vector<int> v = {1, 2, 5, 9};

    // Finding the index of 5
    auto it = find(v.begin(), v.end(), 5);
    cout << it - v.begin();

    return 0;
*/
