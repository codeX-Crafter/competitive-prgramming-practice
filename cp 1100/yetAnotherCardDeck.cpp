#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, qq;
    cin >> n >> qq;

    map<int, int> mpp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mpp.insert({x, i});
    }

    vector<int> q(qq);
    vector<int> ans;
    for (int i = 0; i < qq; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < qq; i++)
    {
        auto it = mpp.find(q[i]);
        ans.push_back(it->second);
        for (auto i = mpp.begin(); i != mpp.end(); i++)
        {
            if (i->second < it->second)
            {
                i->second++;
            }
        }
        it->second = 1;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

// mine worked too but editorial m rotate use kiya h no map actually

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q;
//     scanf("%d%d", &n, &q);
//     vector<int> a(n);
//     for (int &x : a)
//         scanf("%d", &x);
//     while (q--)
//     {
//         int x;
//         scanf("%d", &x);
//         int p = find(a.begin(), a.end(), x) - a.begin();
//         printf("%d ", p + 1);
//         rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
//     }
// }

// rotate(a.begin(), a.begin()+p, a.begin()+p+1);  O(n)
// element at index p ko front me le aata hai.