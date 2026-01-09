import sys

n = int(sys.stdin.readline())
arr = [int(sys.stdin.readline()) for _ in range(n)]

arr.sort()

out = sys.stdout.write
for i in arr:
    out(str(i) + '\n')