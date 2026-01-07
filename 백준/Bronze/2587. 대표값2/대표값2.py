arr = [int(input()) for _ in range(5)]
arr.sort()

avg = sum(arr) // len(arr)
med = arr[2]

print(avg)
print(med)
