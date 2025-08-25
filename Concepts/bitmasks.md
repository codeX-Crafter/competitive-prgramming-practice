## To find 2^n (2 raised to the power n)

```
1<<n
```

## Difference between signed int and unsigned int

| Feature                  | **Signed int**                                     | **Unsigned int**       |
| ------------------------ | -------------------------------------------------- | ---------------------- |
| **Bit allocation**       | 1 bit for sign (+/−), remaining bits for magnitude | All bits for magnitude |
| **Value range (32-bit)** | −2,147,483,648 to +2,147,483,647                   | 0 to 4,294,967,295     |
| **Negative numbers**     | Yes                                                | No                     |
| **Max positive value**   | $2^{31} - 1$                                       | $2^{32} - 1$           |

### Why range differs?

Signed uses two’s complement representation → half the values represent negatives.
Unsigned treats all bit patterns as positive integers.
























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

```

```
