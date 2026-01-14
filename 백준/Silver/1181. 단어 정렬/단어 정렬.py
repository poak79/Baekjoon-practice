import sys
input = sys.stdin.readline

n = int(input())

wd = set(input().strip() for _ in range(n))
wd = list(wd)

wd.sort()
wd.sort(key=len)

for i in wd:
    print(i)
