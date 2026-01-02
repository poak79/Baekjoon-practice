def sum(n):
    total = 0
    while n > 0:
        total += n % 10
        n //= 10
    return total

def gen(n):
    start = max(1, n - len(str(n)) * 9)

    for m in range(start, n):
        if m + sum(m) == n:
            return m

    return 0

n = int(input())
print(gen(n))