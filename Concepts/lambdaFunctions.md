# Lambda Expressions in C++

C++11 introduced **lambda expressions** for defining inline, anonymous functions used mainly in STL algorithms as callbacks.

---

## Basic Syntax

```cpp
[capture-clause] (parameters) -> return-type {
    // function body
};
```

## Terms

### Return Type

Generally, the return-type in lambda expressions is evaluated by the compiler itself and we don’t need to specify it explicitly. However, in some complex cases e.g. conditional statements, the compiler can’t determine the return type and explicit specification is required.

### Parameters

These parameters are similar to the function parameters in every way.

### Capture Clause

A lambda expression can have more power than an ordinary function by having access to variables from the enclosing scope. We can capture external variables from the enclosing scope in three ways using capture clause:

[&]: capture all external variables by reference.

[=]: capture all external variables by value.

[a, &b]: capture 'a' by value and 'b' by reference.

A lambda with an empty capture clause [] can only access variables which are local to it.

## Example

```
// Defining a lambda
    auto res = [](int x) {
        return x + x;
    };
    cout << res(5);
```

```
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v1, v2;

    // Capture v1 and v2 by reference
    auto byRef = [&] (int m) {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Capture v1 and v2 by value
    auto byVal = [=] (int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Capture v1 by reference and v2 by value
    auto mixed = [=, &v1] (int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Push 20 in both v1 and v2
    byRef(20);

    // Push 234 in both v1 and v2
    byVal(234);

    // Push 10 in both v1 and v2
    mixed(10);

    print(v1);
    print(v2);

    return 0;
}
```
