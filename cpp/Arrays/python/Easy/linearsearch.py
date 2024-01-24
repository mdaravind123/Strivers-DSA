def rotateArray(arr: list, k: int) -> list:
    lst=[]
    for i in range(k):
        lst.append(arr[0])
        arr.remove(arr[0])
    for i in lst:
        arr.append(i)
    return arr
    pass