import sys
input = sys.stdin.readline

res = 1

for _ in range(3):
    res *= int(input().strip())

cnt = [0] * 10

for ch in str(res):
    cnt[int(ch)] += 1

for i in range(10):
    print(cnt[i])