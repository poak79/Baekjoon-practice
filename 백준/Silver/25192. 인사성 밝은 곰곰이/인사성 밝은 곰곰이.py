import sys
input = sys.stdin.readline

n = int(input())
cnt = 0
name = set()

for _ in range(n):
    s = input().strip()

    if s == "ENTER":
        name.clear()
    else:
        if s not in name:
            cnt += 1
            name.add(s)

print(cnt)