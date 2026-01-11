import sys
input = sys.stdin.readline

s = input().strip()
arr = sorted(s)

print(''.join(arr[::-1]))