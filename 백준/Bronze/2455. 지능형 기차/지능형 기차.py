res = 0
res2 = [0] * 4
max = res2[0]

for i in range(4):
    a, b = map(int, input().split())
    res += b
    res -= a
    res2[i] = res
    if res2[i] > res2[i-1]:
        max = res2[i]

print(max)