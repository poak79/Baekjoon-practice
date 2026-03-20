t = int(input())

if t%10 != 0:
    print(-1)
else:
    cnt_f = t//300
    t %= 300

    cnt_o = t//60
    t %= 60

    cnt_t = t//10
    
    print(cnt_f, cnt_o, cnt_t)