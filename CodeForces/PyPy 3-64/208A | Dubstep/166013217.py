sen = input().split('WUB')
for i in sen:
    if i == '':
        sen.remove(i)
print(*sen)