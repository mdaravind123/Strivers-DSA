def sortedArray(a: [int], b: [int]) -> [int]:
    c=list(set(a+b))
    c.sort()
    return c
    pass