class Solution:
    def sortPeople(self, names, heights):
        d={}
        for i in range(len(heights)):
            d[heights[i]]=names[i]
        dictitems=sorted(d.items(),key=lambda x:x[0],reverse=True)
        answer=[]
        for i in dictitems:
            answer.append(i[1])
        return answer