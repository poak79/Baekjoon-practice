import sys

n = sys.stdin.readline().strip()

if n == '0':
    print(0)
else:
    res = [bin(int(n[0]))[2:]]
    
    for ch in n[1:]:
        res.append(format(int(ch), '03b'))

    print(''.join(res))
