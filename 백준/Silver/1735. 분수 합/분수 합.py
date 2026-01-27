import sys
input = sys.stdin.readline

def gcd(x, y):
    while y:
        x, y = y, x%y
    return x

a, b = map(int, input().split())
c, d = map(int, input().split())

num = a * d + c * b
den = b * d

g = gcd(num, den)
num //= g
den //= g

print(num, den)
