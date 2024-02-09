no = int(input())
word = input().lower()
l = []
for i in word:
    if i not in l:
        l.append(i)
if len(l) >= 26:
    print('YES')
else:
    print('NO')