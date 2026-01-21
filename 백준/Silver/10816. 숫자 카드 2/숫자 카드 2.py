import sys
input = sys.stdin.readline

n = int(input())
card = list(map(int, input().split()))

cnt = {}

for num in card:
    cnt[num] = cnt.get(num, 0)+1

m = int(input())
q = list(map(int, input().split()))

for y in q:
    print(cnt.get(y, 0), end=' ')