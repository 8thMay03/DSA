from decimal import *

getcontext().prec = 10000

def factorial(n):
    if n == 0:
        return 1
    return factorial(n - 1) * n

def catalan(n):
    if n == 0:
        return 1
    return Decimal(factorial(2 * n)) / (Decimal(factorial(n)) * Decimal(factorial(n + 1)))

t = int(input())
while t > 0:
    a = int(input())
    print(catalan(a))
    t -= 1