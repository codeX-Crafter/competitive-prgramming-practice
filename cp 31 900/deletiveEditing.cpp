#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, subS;
        cin >> S >> subS;
        vector<int> hash(26);
        for (int i = 0; i < S.size(); i++)
        {
            hash[(S[i] - 'A')]++;
        }for (int i = 0; i < S.size(); i++)
        {
            hash[(subS[i] - 'A')]++;
        }
    }
    return 0;
}