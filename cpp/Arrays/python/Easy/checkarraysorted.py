def isSorted(n: int,  a: [int]) -> int:
    ans=1
    for i in range(len(a)-1):
        if(a[i]>a[i+1]):
            ans=0
            break
    return ans
    pass