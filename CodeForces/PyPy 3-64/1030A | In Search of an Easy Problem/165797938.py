x = int(input())
list1 = list(map(int, input().split()))
if 1 in list1:
    print('HARD')
else:
    print('EASY')