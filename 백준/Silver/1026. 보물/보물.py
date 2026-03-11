import sys
input = sys.stdin.readline

n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort()
b.sort(reverse=True)

def s(c):
    res = 0
    for i in range(c):
        res += a[i] * b[i]
    return res

print(s(n))