fir = 0
res_i = 0

for i in range(5):
    arr = list(map(int, input().split()))
    res = sum(arr)
    
    if res > fir:
        fir = res
        res_i = i + 1

print(res_i, fir)