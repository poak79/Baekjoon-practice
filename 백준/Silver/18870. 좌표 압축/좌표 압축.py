import sys

input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

sort = sorted(set(arr))

idx={}
for i in range(len(sort)):
    idx[sort[i]] = i

for x in arr:
    print(idx[x], end = ' ')