no = input()
list1 = []
for i in no:
    if i == '4' or i == '7':
        list1.append(i)
if len(list1) == 4 or len(list1) == 7:
    print('YES')
else:
    print('NO')