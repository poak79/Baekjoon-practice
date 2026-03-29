n = int(input())
y_res = 0
m_res = 0

arr = list(map(int, input().split()))

for i in arr:
    y_res += (i // 30 + 1) * 10
    m_res += (i // 60 + 1) * 15

if y_res > m_res:
    print('M', m_res)
elif y_res < m_res:
    print('Y', y_res)
else:
    print('Y M', y_res)