import sys
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    ps = input().strip()
    bal = 0
    ok = True

    for ch in ps:
        if ch == '(':
            bal += 1
        else:
            bal -= 1
            if bal < 0:
                ok = False
                break
            
    if ok and bal == 0:
        print("YES")
    else:
        print("NO")