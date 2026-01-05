n, m = map(int, input().split())
board = [input().strip() for _ in range(n)]
res = 64

for x in range(n-7):
    for y in range(m-7):
        w = 0
        b = 0

        for i in range(8):
            for j in range(8):
                cur = board[x+i][y+j]

                if (i + j) % 2 == 0:
                    if cur != 'W':
                        w += 1
                    if cur != 'B':
                        b += 1
                else:
                    if cur != 'W':
                        b += 1
                    if cur != 'B':
                        w += 1

        res = min(res, w, b)

print(res)
