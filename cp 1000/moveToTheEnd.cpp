#include <bits/stdc++.h>
using namespace std;
// TLE
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long> ans = v;
        long long sum = *max_element(v.begin(), v.end());
        long long endIndex = n - 1;
        vector<long long> ansF;
        ansF.push_back(sum);
        // sort(ans.begin(), ans.end());
        for (long long i = 1; i < n; i++)
        {
            sum = 0;

            for (int j = n - 1; j >= n - i && j >= 0; j--)
            {
                // cout << "j " << j << "\n";
                sum += v[j];
                // cout << "sum " << sum << "\n";
            }

            sum = sum + *max_element(v.begin(), v.begin() + endIndex);
            ansF.push_back(sum);
            endIndex--;
        }
        for (long long i = 0; i < n; i++)
        {
            cout << ansF[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}