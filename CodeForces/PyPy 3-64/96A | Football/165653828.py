nos = list(map(int, input()))
c = 0
try:
    for no in range(len(nos)):
        if nos[no] == nos[no+1]:
            c += 1
            if c >= 6:
                print('YES')
                break
        else:
            c = 0
except:
    print('', end='')
if c < 6:
    print('NO')