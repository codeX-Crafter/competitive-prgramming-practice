#include <bits/stdc++.h>
using namespace std;
#define int long long
// double qoutes for string
// SINGLE QOUTES FOR CHARACTERs
signed main()
{
    string a;
    cin >> a;
    cout << a << endl;
    cout << a.size() << endl;
    cout << a.length() << endl;

    string b = "gdg igdtuw";
    char c = 'g';
    cout << b << endl;
    cout << b.size() << endl;

    // Traversals
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
    cout << endl;
    for (char ch : a)
    {
        cout << ch;
    }
    cout << endl;
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    // Access char at an index
    cout << a[4] << endl;
    cout << a.at(4) << endl;

    string one = "hello";
    string two = "everyone";

    // concatination
    cout << one + " " + two << endl; // new string
    cout << one.append(two) << endl; // existing first string m add

    // insertion and removal
    a.push_back('Q');
    cout << a << endl;
    a.pop_back();
    cout << a << endl; // these both are constant time opts

    a.insert(9, "eloper");
    cout << a << endl;
    a.insert(6, 1, 'e');
    cout << a << endl;

    a.erase(10, 6);
    cout << a << endl;
    a.erase(a.begin() + 6);
    cout << a << endl;
    a.erase(a.begin() + 6, a.begin() + 9); //[6,9)
    cout << a << endl;                     // thesse both insert and erase are linear time complexity functions

    // subtrings
    string sub = b.substr(0, 3);
    cout << sub << endl;
    cout << b.find("dtu") << endl; // returns index or string::npos

    return 0;
}