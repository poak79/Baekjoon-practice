import sys
input = sys.stdin.readline

n = int(input())

def fir(i, j):
    while i>0 or j>0:
        if(i%3==1 and j%3==1):
            return True
        i//=3
        j//=3
    return False
        
out = []
for i in range(n):
    line = []
    for j in range(n):
        line.append(' ' if fir(i, j) else '*')
    out.append(''.join(line))

sys.stdout.write('\n'.join(out))
