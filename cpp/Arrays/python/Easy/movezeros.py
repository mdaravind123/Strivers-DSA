def moveZeros(n: int,  a: [int]) -> [int]:
    lst=[]
    c=0
    for i in a:
        if i==0:
            c=c+1
        else:
            lst.append(i)
    for i in range(c):
        lst.append(0)
    return lst
    pass