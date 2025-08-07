## XOR calculations

This one gave a TLE because obviously it has a linear time complexity so we have another way to calculate XOR in constant tc given that the numbers are 0 to n

```
for (int i = 0; i < a; i++)
{
    XOR ^= i;
}
```

```
if (n % 4 == 0)
   XOR = n;
else if (n % 4 == 1)
   XOR = 1;
else if (n % 4 == 2)
   XOR = n + 1;
else if (n % 4 == 3)
   XOR = 0;
```

You can also consider precomputing the XOR
