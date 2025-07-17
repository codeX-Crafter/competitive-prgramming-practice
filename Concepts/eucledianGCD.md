## Eucledian GCD (Greatest Commen Divisor)

### Implementation

```
// C++ program to demonstrate working of
#include <bits/stdc++.h>
using namespace std;

// Function to return
// gcd of a and b
int findGCD(int a, int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

int main()  {
    int a = 35, b = 15;
    int g = findGCD(a, b);
    cout << g << endl;
    return 0;
}
```

### In-built cpp

Library: 'algorithm'

```
__gcd(a, b)
```

Parameter : a, b
Return Value : 0 if both m and n are zero,
else gcd of a and b.

## Program to Find the gcd of all numbers in a vector.

```
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers = { 12, 15, 18, 21, 24 };
    int ans =__gcd(numbers[0], numbers[1]);
    for (int i = 2; i < numbers.size(); i++)
    {
        ans = __gcd(ans, numbers[i]);
    }
    cout << "The GCD of the numbers in the vector is: " <<ans<<endl;
    return 0;
}
```
