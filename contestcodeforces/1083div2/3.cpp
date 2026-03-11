#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(vector<int> &a, vector<int> &b)
{
    // return (a.back() < b.back());
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 && j >= 0)
    {
        if (a[i] != b[j])
            return a[i] < b[j];
        i--;
        j--;
    }

    return a.size() < b.size();
}

// now I feel sort by which has smallest element from back which has not yet occured in the previous vector chosen idk if that makes any sense

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        int num = n;
        while (num--)
        {
            vector<int> temp;
            int x;
            cin >> x;
            while (x--)
            {
                int y;
                cin >> y;
                temp.push_back(y);
            }
            v.push_back(temp);
        }
        // sort(v.begin(), v.end(), cmp);

        // unordered_set<int> s;
        // list<int>ls;
        // vector<int> s;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < v[i].size(); j++)
        //     {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = v[i].size() - 1; j >= 0; j--)
        //     {
        //         int k = v[i][j];
        //         s.push_back(k);
        //     }
        // }
        // s.erase(s.unique(s.begin(), s.end()), s.end());

        // unordered_set<int> set;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (set.count(s[i]))
        //         continue;
        //     set.insert(s[i]);
        //     ans.push_back(s[i]);
        // }
        vector<int> ans;

        
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}