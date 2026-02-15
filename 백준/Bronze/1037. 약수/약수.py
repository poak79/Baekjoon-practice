import sys
input = sys.stdin.readline

n = int(input().strip())
div = list(map(int, input().split()))

div.sort()
print(div[0] * div[-1])
