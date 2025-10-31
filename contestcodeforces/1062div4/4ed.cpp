
// yeh cf comments m sol mila why could I not think this way

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            if ((long long)i * i <= n)
                for (int j = i * i; j <= n; j += i)
                    isPrime[j] = false;
        }
    }
    return primes;
}

void solve(const vector<int> &primes)
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    for (int p : primes)
    {
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (__gcd(a[i], p) == 1)
            {
                cout << p << "\n";
                return;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> primes = sieve(75); // same as primes_upto_n(75)
    int t;
    cin >> t;
    while (t--)
        solve(primes);
}

// ed
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        bool odd = false, even = false;
        int a[n];
        for (int i = 0, x; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even = true;
            else
                odd = true;
        }
        if (odd and even)
            sort(a, a + n);
        for (int i = 0; i < n; ++i)
            cout << a[i] << " \n"[i == n - 1];
    }
}