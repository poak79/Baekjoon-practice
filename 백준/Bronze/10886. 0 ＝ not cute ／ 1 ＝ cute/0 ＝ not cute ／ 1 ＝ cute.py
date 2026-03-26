n = int(input())

arr = [int(input()) for _ in range(n)]

ncnt = 0
cnt = 0
for i in range(n):
    if arr[i] == 1:
        cnt += 1
    else:
        ncnt += 1

res = "Junhee is cute!" if cnt > ncnt else "Junhee is not cute!"
print(res)