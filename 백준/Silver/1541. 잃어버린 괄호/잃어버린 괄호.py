input = input().strip()

part = input.split('-')

res = 0

for i in range(len(part)):
    gres = 0
    plus = part[i].split('+')
    for num in plus:
        gres += int(num)
    if i == 0:
        res += gres
    else:
        res -= gres

print(res)