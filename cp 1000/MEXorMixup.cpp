#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = a;
        int XOR = 0;
        // this one gave a TLE because obviously it has a linear time complexity so we have another way to calculate XOR in constant tc given that the numbers are 0 to n;
        // you can also consider precomputing the XOR
        //  for (int i = 0; i < a; i++)
        //  {
        //      XOR ^= i;
        //  }
        //  cout << "xor " << XOR << endl;
        int n = a - 1;
        if (n % 4 == 0)
            XOR = n;
        else if (n % 4 == 1)
            XOR = 1;
        else if (n % 4 == 2)
            XOR = n + 1;
        else if (n % 4 == 3)
            XOR = 0;
        if (XOR == b)
        {
            ans = a;
        }
        else
        {
            // cout << (XOR ^ b) << endl;
            if ((XOR ^ b) != a)
            {
                ans = a + 1;
            }
            else
            {
                ans = a + 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}