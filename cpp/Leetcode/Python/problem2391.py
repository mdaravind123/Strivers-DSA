class Solution:
    def garbageCollection(self, garbage: List[str], travel: List[int]) -> int:
        paper=[]
        glass=[]
        metal=[]
        for i in range(len(garbage)):
            paper.append(garbage[i].count("P"))
            glass.append(garbage[i].count("G"))
            metal.append(garbage[i].count("M"))
        mintime=0
        if(sum(paper)==0):
            mintime=mintime+0
        else:
            i=0
            t=sum(paper)
            while(t>0 and i<len(paper)):
                if(paper[i]>0):
                    mintime=mintime+paper[i]
                    t=t-paper[i]
                    if(t>0):
                        mintime+=travel[i]
                else:
                    if(t>0):
                        mintime+=travel[i]
                i+=1
        if(sum(glass)==0):
            mintime=mintime+0
        else:
            j=0
            t1=sum(glass)
            while(t1>0 and j<len(glass)):
                if(glass[j]>0):
                    mintime+=glass[j]
                    t1=t1-glass[j]
                    if(t1>0):
                        mintime+=travel[j]
                else:
                    if(t1>0):
                        mintime+=travel[j]
                j+=1
        if(sum(metal)==0):
            mintime=mintime+0
        else:
            k=0
            t2=sum(metal)
            while(t2>0 and k<len(metal)):
                if(metal[k]>0):
                    mintime+=metal[k]
                    t2=t2-metal[k]
                    if(t2>0):
                        mintime+=travel[k]
                else:
                    if(t2>0):
                        mintime+=travel[k]
                k+=1
        return mintime