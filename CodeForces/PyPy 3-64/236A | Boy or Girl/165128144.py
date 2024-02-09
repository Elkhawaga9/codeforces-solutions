name = input().lower()
l = []
l2 = []
word = ''
for char in name:
    if name.count(char) < 2:
        l.append(char)
    else:
        l2.append(char)
for item in l2:
    if item not in l:
        l.append(item)
if len(l) % 2 == 0:
    print('CHAT WITH HER!')
else:
    print("IGNORE HIM!")