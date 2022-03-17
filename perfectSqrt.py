def isPerfectSquare(num):
    i = 0
    while (i ** 2 <= num):
        if i ** 2 == num:
            return bool(1)
        i += 1
    return bool(0)