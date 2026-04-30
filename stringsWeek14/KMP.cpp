#include <bits/stdc++.h>
using namespace std;

vector<int> buildLPS(string pattern)
{
    int m = pattern.size();
    vector<int> lps(m, 0);

    int length = 0;
    int i = 1;

    while (i < m)
    {
        if (pattern[i] == pattern[length])
        {
            length++;
            lps[i] = length;
            i++;
        }
        else
        {
            if (length != 0)
            {
                length = lps[length - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int> kmpSearch(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    vector<int> lps = buildLPS(pattern);
    vector<int> result;

    int i = 0, j = 0;

    while (i < n)
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }

        if (j == m)
        {
            result.push_back(i - j);
            j = lps[j - 1];
        }
        else if (i < n && text[i] != pattern[j])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return result;
}

int main()
{
    string text, pattern;

    cin >> text;
    cin >> pattern;

    vector<int> matches = kmpSearch(text, pattern);

    if (matches.empty())
    {
        cout << "No match found\n";
    }
    else
    {
        for (int idx : matches)
        {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}