import sys
from math import gcd
input = sys.stdin.readline

n = int(input().strip())
x = [int(input().strip()) for _ in range(n)]
x.sort()

g = 0
for i in range(n-1):
    g = gcd(g, x[i+1] - x[i])

cnt = 0
for i in range(n-1):
    cnt += (x[i+1] - x[i]) // g - 1

print(cnt)
