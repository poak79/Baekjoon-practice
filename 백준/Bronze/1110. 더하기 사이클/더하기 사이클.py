n = int(input())
res = n
cnt = 0

while True:
    if n < 10:
        n *= 11
        cnt += 1
    else:
        a = n//10
        b = n%10
        add = a+b
        n = (b*10)+(add%10)
        cnt += 1
        
    if n == res:
        print(cnt)
        break