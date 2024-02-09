word = input()
l = []
ans = ''
for char in word:
    l.append(char)
l[0] = l[0].upper()
for item in l:
    print(item,end='')
    