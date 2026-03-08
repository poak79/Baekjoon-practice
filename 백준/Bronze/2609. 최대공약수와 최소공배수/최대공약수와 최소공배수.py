import sys
input = sys.stdin.readline

n, m = map(int, input().split())

def gcd(a, b):
    while b != 0:
        temp = a % b
        a = b
        b = temp
    return a

def lcm(a, b):
    return int((a * b) / (gcd(a, b)))

print(gcd(n, m))
print(lcm(n, m))