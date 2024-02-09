x = int(input())
sen = ''
for i in range(1, x+1):
    if i % 2 == 0:
        sen = sen + 'that I love '
    else:
        sen = sen + 'that I hate '
if sen.startswith('that'):
    sen = sen[5:]
print(sen + 'it')