#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

long long recursive(int cons)
{
    if (cons == 0)
    {
        return 0;
    }
    return cons + recursive(cons - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long cnt = 0;
        long long count = 0;
        // cout << "holaaaaaaaaa" << endl;
        // for (long long f = k; f <= n; f++)
        // {
        cnt = 0;
        for (long long i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                cnt++;
                if (cnt >= k)
                {
                    // count++;

                    count += (cnt - k + 1);
                }
                // if (cnt >= k)
                //     count += fact(cnt) / fact(k);
                // if (i == n - 1)
                // {
                // if (cnt >= k)
                //     count += fact(cnt) / fact(k);
                // if (cnt >= k)
                // count += (recursive(ceil((float)cnt / k)));
                // cout << "count1 f " << count << " " << f << endl;
                // }
            }
            else
            {
                // if (cnt >= k)
                //     count += recursive(cnt);
                // if (cnt >= k)
                // count += (recursive(ceil((float)cnt / k)));

                // cout << recursive(cnt) << endl;
                // cout << k << endl;
                // cout << (recursive(cnt / k)) << endl;

                // cout << "count2 " << count << endl;
                // cout << "count2 " << count << endl;
                // cout << "count2 f " << count << " " << f << endl;

                cnt = 0;
            }
        }

        cout << count << endl;
    }
    return 0;
}

// 6 3 4
// -1 -1 -5 0 2 -4