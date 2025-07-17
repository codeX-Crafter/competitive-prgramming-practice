#include <bits/stdc++.h>
using namespace std;

// Binary Search
// This code is for sorted array only
int main()
{
    cout << "Length of array: ";
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort(v.begin(), v.end());
    int target;
    cin >> target;

    int low = 0;
    int high = n - 1;
    int mid;

    while ((high - low) > 1)
    {
        mid = (high + low) / 2;
        if (target > v[mid])
        {
            low = mid + 1;
        }
        else if (target <= v[mid])
        {
            high = mid;
        }
    }

    if (target == v[low])
    {
        cout << low << "\n";
    }
    else if (target == v[high])
    {
        cout << high << "\n";
    }
    else
    {
        cout << "Not Found\n";
    }

    return 0;
}