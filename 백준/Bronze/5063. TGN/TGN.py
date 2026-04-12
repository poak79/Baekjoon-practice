n = int(input())

for _ in range(n):
    r, e, c = list(map(int, input().split()))
    res = e - c
    if(res > r):
        print("advertise")
    elif(res == r):
        print("does not matter")
    else:
        print("do not advertise")
