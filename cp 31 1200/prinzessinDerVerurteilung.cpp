#include <iostream>
using namespace std;

int main()
{
    for (char first = 'a'; first <= 'z'; ++first)
    {
        for (char second = 'a'; second <= 'z'; ++second)
        {
            int value = (first << 8) | second;
            cout << "'" << first << second << "' = " << value << endl;
        }
    }
    return 0;
}
