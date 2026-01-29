import sys
input = sys.stdin.readline

n = int(input())

stack = []
out = []

top = -1

for _ in range(n):
    cmd = input().split()
    op = cmd[0]
    
    if op == '1':
        x = int(cmd[1])
        stack.append(x)

    elif op == '2':
        if stack:
            out.append(str(stack.pop()))
        else:
            out.append('-1')
            
    elif op == '3':
        out.append(str(len(stack)))
        
    elif op == '4':
        out.append('1' if not stack else '0')
        
    elif op == '5':
        out.append(str(stack[-1]) if stack else '-1')

sys.stdout.write("\n".join(out))