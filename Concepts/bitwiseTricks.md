## Check if number if odd or even

Check if the least significant bit is 1 or not
if yes, then the number is odd otherwise it's even

You can do this by using bitwise '&' with 1

### Example

```
9 & 1 = 1  => Odd

6 & 1 = 0 => Even
```

## Check if number x is power of 2 or not

```
If x & (x-1) = 0 => x is a power of 2

If x & (x-1) != 0 => x is not a power of 2
```

This won't work for x==0

```
bool isPowerOf2(int x){

    return n > 0 && (n & (n - 1)) == 0;

}
```

## Bit manipulation operations using the k-th bit from the right

### Note :

```
1 << k creates a number with only the k-th bit set.

Example: k = 2 → 00000100 (in binary)

1<< n gives 2 ki power n

```

### Check if k-th bit is set:

```
X & (1 << k) 

→ Returns non-zero if set, zero otherwise.
```

### Toggle the k-th bit:

```
X ^ (1 << k)

→ Flips the k-th bit.
```

### Set the k-th bit:

```
X | (1 << k)

→ Ensures the k-th bit is 1.
```

### Unset (clear) the k-th bit:

```
X & ~(1 << k)

→ Ensures the k-th bit is 0.
```
