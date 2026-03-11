from collections import Counter

def f(a):
    c=Counter(a) 
    x=[]
    y=0
    for k, v in c.items():
        if v & 1:x.append(k)
        else:y += k
    x.sort(reverse=True)
    p = sum(x[i] for i in range(0, len(x), 2))
    q = sum(x[i] for i in range(1, len(x), 2)) 
    if len(x)%2==0:p+=y
    else:  q+=y
    
    return p,q
for _ in range(int(input())):
    n=int(input())
    arr = list(map(int,input().split()))
    print(f(arr))