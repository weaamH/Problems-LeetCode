class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        newStr=s[::-1]
        counter=0
        i=0
        while newStr[i]==' ':
            i+=1
        newStr=newStr[i::]
        k=0
        for k in range(len(newStr)):
            if newStr[k]!=' ':
                counter+=1
            else:
                return counter
        return counter