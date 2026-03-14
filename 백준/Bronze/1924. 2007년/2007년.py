x, y = map(int, input().split())

mon = ["31", "28", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31"] 
sun = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"]

res = 0
for i in range(0, x-1):
    res += int(mon[i])

res += y
res %= 7
print(sun[res])