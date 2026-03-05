import sys

max = 10000
gen = [False] * (max +1)

def d(n):
    s = n
    while n:
        s += n%10
        n //= 10
    return s    

for i in range(1, max+1):
    v = d(i)
    if v <= max:
        gen[v] = True

out = []
for i in range(1, max+1):
    if not gen[i]:
        out.append(str(i))

sys.stdout.write("\n".join(out))
