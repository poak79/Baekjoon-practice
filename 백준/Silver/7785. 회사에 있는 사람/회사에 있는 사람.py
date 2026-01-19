import sys

input = sys.stdin.readline

n = int(input())
com = set()

for _ in range(n):
    name, res = input().split()
    if res == 'enter':
        com.add(name)
    else:
        com.remove(name)

for name in sorted(com, reverse=True):
    print(name)