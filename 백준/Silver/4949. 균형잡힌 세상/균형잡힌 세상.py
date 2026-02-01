import sys
input = sys.stdin.readline

while True:
    s = input().rstrip()
    if s == '.':
        break

    stack = []
    ok = True

    for ch in s:
        if ch == '(' or ch == '[':
            stack.append(ch)
            
        elif ch == ')':
            if not stack or stack[-1] != '(':
                ok = False
                break
            stack.pop()

        elif ch == ']':
            if not stack or stack[-1] != '[':
                ok = False
                break
            stack.pop()

        elif ch == '.':
            break
                        
    if ok and not stack:
        print("yes")
    else:
        print("no")
