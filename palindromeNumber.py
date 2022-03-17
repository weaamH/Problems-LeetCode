def isPalindrome(self, x: int) -> bool:
    reversedX = str(x)[::-1]
    if reversedX[-1] == '-': return False
    return x == int(str(x)[::-1])