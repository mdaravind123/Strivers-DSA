from sys import *
from collections import *
from math import *

def rotateArray(arr: [], n: int) -> []:
    first=arr[0]
    arr.remove(first)
    arr.append(first)
    return arr
    pass
