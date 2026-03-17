arr = [int(input()) for _ in range(7)]
odd = []

sum = 0
for i in range(7):
    if arr[i] % 2 == 1:
        sum += arr[i]
        odd.append(arr[i])

if len(odd) == 0:
    print(-1)
else:
    min = odd[0]
    for i in range(len(odd)):
        if min > odd[i]:
            min = odd[i]

    print(sum)
    print(min)