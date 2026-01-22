import sys

input = sys.stdin.readline

n, m = map(int, input().split())

listen = set()

for _ in range(n):
    listen.add(input().strip())

res = []
for _ in range(m):
    see = input().strip()
    if see in listen:
        res.append(see)

res.sort()
print(len(res))
print('\n'.join(res))
