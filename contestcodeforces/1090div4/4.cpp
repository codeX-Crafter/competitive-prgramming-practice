#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> sieve(int MAXN)
{
    vector<bool> isPrime(MAXN + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAXN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= MAXN; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }

    return primes;
}

signed main()
{
    vector<int> ans = sieve(200000);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> v(n + 1);
        // v[0] = 1;
        // cout << v[0] << " ";
        // for (int i = 1; i < n; i++)
        // {
        //     v[i] = 2 * v[i - 1];
        //     cout << v[i] << " ";
        // }

        for (int i = 0; i < n; i++)
        {
            // if (i % 2 == 0)
            // {
            //     v[i] = i + 1;
            // }
            // else
            // {
            //     v[i] = v[i - 1] * 2;
            // }
            // v[i] = i * (i + 1);
            // cout << v[i] << " ";
            // cout << i * (i + 1) << " ";
            cout << ans[i] * ans[i + 1] << " ";
        }
        cout << endl;
    }
    return 0;
}