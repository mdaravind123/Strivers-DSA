class Solution:
    def findWordsContaining(self, words, x: str):
        lst=[]
        for i in range(len(words)):
            if x in words[i]:
                lst+=[i]
        return lst