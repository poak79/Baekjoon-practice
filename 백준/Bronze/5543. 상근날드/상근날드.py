b_arr = [int(input()) for _ in range(3)]
d_arr = [int(input()) for _ in range(2)]

b_min = b_arr[0]
d_min = d_arr[0]

for i in b_arr:
    if i < b_min:
        b_min = i

for i in d_arr:
    if i < d_min:
        d_min = i

print((b_min + d_min) - 50)