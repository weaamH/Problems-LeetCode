def plusOne(digits):
    if digits[len(digits)-1]!=9: digits[len(digits)-1]+=1
    else:
        digits[len(digits)-1]=0
        i = len(digits) - 2
        while digits[i] == 9:
            digits[i]=0
            i-=1
        if i!=-1: digits[i] += 1
    if digits[0] == 0: digits.insert(0, 1)
    return digits