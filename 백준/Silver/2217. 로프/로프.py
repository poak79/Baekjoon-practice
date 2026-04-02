n = int(input())

rope = [int(input()) for _ in range(n)]

rope.sort()
maximum = rope[0]
for i in range(n):
    res = rope[i] * (n - i)
    if res > maximum:
        maximum = res

print(maximum)
