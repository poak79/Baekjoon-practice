import sys
from collections import deque
input = sys.stdin.readline

n = int(input())

q = deque(range(1, n+1))
res = []

mov = list(map(int, input().split()))

pop = q.popleft()
res.append(str(pop))
op = mov[pop-1]
           
for _ in range(n-1):
    if op > 0:
        q.rotate(-(op-1))
    else:
        q.rotate(-op)

    pop = q.popleft()
    res.append(str(pop))
    op = mov[pop-1]

print(" ".join(res))
