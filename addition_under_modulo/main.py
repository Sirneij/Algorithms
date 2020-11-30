
M = 1000000007


def sumUnderModulo(a, b):
    total = a + b
    sum_divisor = total % M
    return sum_divisor
