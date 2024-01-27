def majorityElement(v: [int]) -> int:
    lst=[]
    s=list(set(v))
    for i in s:
        cnt=v.count(i)
        if(cnt>len(v)/2):
            return i