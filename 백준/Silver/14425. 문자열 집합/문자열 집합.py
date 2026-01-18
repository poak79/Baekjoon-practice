import sys

input = sys.stdin.readline
n, m = map(int, input().split())

narr = [input() for _ in range(n)]

marr = [input() for _ in range(m)]    

cnt = 0

for x in marr:
    if x in narr:
        cnt = cnt+1

print(cnt)