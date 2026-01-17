import sys

input = sys.stdin.readline

n = int(input())

nuse = set(map(int, input().split()))

m = int(input())

muse = list(map(int, input().split())) 

for x in muse:
    print(1 if x in nuse else 0, end=' ')
