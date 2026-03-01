import sys
input = sys.stdin.readline

n, m = map(int, input().split())

out = []

def go(f):
    if len(out) == m:
        print(*out)
        return

    for x in range(f, n+1):
        out.append(x)
        go(x+1)
        out.pop()
        
go(1)
