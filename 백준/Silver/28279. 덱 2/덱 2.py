import sys
from collections import deque
input = sys.stdin.readline

n = int(input())

d = deque()
out = []

for _ in range(n):
    cmd = input().split()
    op = cmd[0]

    if op=='1':
        d.appendleft(int(cmd[1]))

    elif op=='2':
        d.append(int(cmd[1]))

    elif op=='3':
        if d:
            out.append(str(d.popleft()))
        else:
            out.append('-1')

    elif op=='4':
        if d:
            out.append(str(d.pop()))
        else:
            out.append('-1')

    elif op=='5':
        out.append(str(len(d)))

    elif op=='6':
        if not d:
            out.append('1')
        else:
            out.append('0')

    elif op=='7':
        if d:
            out.append(str(d[0]))
        else:
            out.append('-1')

    elif op=='8':
        if d:
            out.append(str(d[-1]))
        else:
            out.append('-1')

sys.stdout.write("\n".join(out))
