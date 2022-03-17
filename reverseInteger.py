def reverse(self, x: int) -> int:
    if str(x)[0] == '-':
        y = str(x)[::-1]
        reversed = int('-' + y[0:len(y) - 1])
    else:
        reversed = int(str(x)[::-1])

    if reversed < -2 ** 31 or reversed > (2 ** 31) - 1:
        return 0
    else:
        return reversed
