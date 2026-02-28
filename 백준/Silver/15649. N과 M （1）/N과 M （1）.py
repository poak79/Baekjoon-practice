import sys
input = sys.stdin.readline

n, m = map(int, input().split())

used = [False] * (n+1)
out = []

def go():
    if len(out) == m:
        print(*out)
        return

    for x in range(1, n+1):
        if used[x]:
            continue

        used[x] = True
        out.append(x)

        go()

        out.pop()
        used[x] = False

go()
