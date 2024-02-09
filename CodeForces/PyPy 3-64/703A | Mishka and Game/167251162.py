s = int(input())
mishka = 0
chris = 0
for i in range(s):
    mylist = list(map(int, input().split()))
    if mylist[0] > mylist[1]:
        mishka += 1
    elif mylist[0] < mylist[1]:
        chris += 1
if mishka > chris:
    print('Mishka')
elif mishka < chris:
    print('Chris')
else:
    print('Friendship is magic!^^')