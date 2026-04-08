mink = list(map(int, input().split()))
mans = list(map(int, input().split()))

minRes = sum(mink)
manRes = sum(mans)

print(max(minRes, manRes))
