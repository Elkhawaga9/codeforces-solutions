x = int(input())
counter = 0
for i in range(x):
    mylist = list(map(int, input().split()))
    if mylist[1] - mylist[0] >= 2:
        counter += 1
print(counter)