arr = [int(input()) for _ in range(5)]

sum = 0
for i in range(5):
    if arr[i] < 40:
        arr[i] = 40
    sum += arr[i]

print(sum//5)