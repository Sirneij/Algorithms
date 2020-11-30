import math


def digitsInFactorial(N):
    fact = math.factorial(N)
    return math.floor(math.log10(fact)+1)


n = 8468

print(f"The number of digits in {math.factorial(n)} is {digitsInFactorial(n)}")
