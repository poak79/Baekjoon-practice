import sys
from collections import deque
input = sys.stdin.readline

n = int(input())

q = deque()
out = []

for _ in range(n):
    cmd = input().split()
    op = cmd[0]

    if op == "push":
        q.append(int(cmd[1]))

    elif op == "pop":
        if q:
            out.append(str(q.popleft()))
        else:
            out.append('-1')

    elif op == "size":
        out.append(str(len(q)))

    elif op == "empty":
        if not q:
            out.append('1')
        else:
            out.append('0')

    elif op == "front":
        if q:
            out.append(str(q[0]))
        else:
            out.append('-1')

    elif op == "back":
        if q:
            out.append(str(q[-1]))
        else:
            out.append('-1')

sys.stdout.write("\n".join(out))
