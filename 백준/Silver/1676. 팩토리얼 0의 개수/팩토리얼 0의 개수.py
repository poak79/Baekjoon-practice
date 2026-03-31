import math

n = int(input())
fact = str((math.factorial(n)))

cnt = 0
for i in fact[::-1]:
    if i == '0':
        cnt += 1
    else:
        break
    
print(cnt)