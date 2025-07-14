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
        vector<int> b(n);
        bool isSorted = true;
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // value of a

        for (int i = 0; i < n; i++)
        {
            a.push_back(b[i]);
            if (b[i] < b[i - 1] && i > 0)
            {
                a.push_back(b[i]);
            }
        }

        // OUTPUT
        cout << a.size() << "\n";
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// int main() {
//     vector<int> v = {1, 3, 7, 9};

//     // Insert element 8 at index 2
//     v.insert(v.begin() + 2, 8);

//     for (auto i : v)
//         cout << i << " ";
//     return 0;
// }

// b[i-1] > b[i] < b[i+1]