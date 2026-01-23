import sys

input = sys.stdin.readline

a, b = map(int, input().split())

aset = set(map(int, input().split()))
bset = set(map(int, input().split()))

cnt = 0
for i in aset:
    if i not in bset:
        cnt += 1

for j in bset:
    if j not in aset:
        cnt += 1

print(cnt)
