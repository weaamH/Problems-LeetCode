def judgeSquareSum(c):
    a=0
    while (a ** 2 <= c):
        b =  c - a ** 2
        i = 1
        sum = 0
        while (sum < b):
            sum += i
            i += 2
        if (sum == b):
            return bool(1)
        a+=1
    return bool(0)


print(judgeSquareSum(55))