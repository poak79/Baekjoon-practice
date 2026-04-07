n, m = map(int, input().split())

p_m = 1000
o_m = 1000

for _ in range(m):
    p, o = map(int, input().split())
    p_m = min(p_m, p)
    o_m = min(o_m, o)

case1 = ((n + 5) // 6 * p_m)
case2 = ((n // 6) * p_m + (n % 6) * o_m)
case3 = n * o_m

print(min(case1, case2, case3))