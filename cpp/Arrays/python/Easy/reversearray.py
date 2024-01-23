def reversearray(arr,m):
  b=arr[m+1:]
  b.sort()
  return arr[:m+1]+b
