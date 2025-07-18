#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e6 + 10;
long long fact[N];

int main()
{
    // precompution the values of factorial for a given n ranging from 0 to 1e5
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] = fact[i] % M;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << "\n";
    }
    return 0;
}
