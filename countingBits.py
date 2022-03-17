def countBits(n):
    ans=[]
    for i in range(n+1):
        string=str(bin(i).replace("0b", ""))
        sum=0
        for char in string:
            if char=='1': sum+=1
        ans.append(sum)
    return ans