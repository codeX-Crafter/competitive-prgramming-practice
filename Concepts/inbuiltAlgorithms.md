## Inbuilt Sort

```
v.sort (v.begin(), v.end());
```

The logic is written as Intro sort combining quick sort, heap sort and insertion sort 

### Custom Sort

```
v.sort (v.begin(), v.end(), cmp);
```

cmp is comparator function(boolean) which we can define to handle the sorting logic , we are supposed to return false if we need to swap or sort for that condition otherwise return true.
To make this easier we will just mntn and return the condition we want our sorted vector or container to follow

For example : navigate to cp31 1000/monsters.cpp

## Minimum Element

```
int mini = *min_element(v.begin(), v.end());
```

## Maximum Element

```
int maxi = *max_element(v.begin(), v.end());
```

## Sum of all array elements

```
long long sum = accumulate(v.begin(), v.end(), 0);

long long sum = accumulate(v.begin(), v.end(), initial sum);
```

## Count of a particualr element in the array

```
int ct = count(v.begin(), v.end(), target);
```

## Find an element in the array

```
auto it = find(v.begin(),v.end(), target);
```

if target is not present in the vector it will return v.end()

## Reverse

```
reverse(s.begin(), s.end());

cout<< s;
```


