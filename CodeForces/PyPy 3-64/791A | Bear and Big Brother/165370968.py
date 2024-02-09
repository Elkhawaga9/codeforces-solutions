list1 = list(map(int, input().split()))
counter = 0
while list1[0] <= list1[1]:
    list1[0] = list1[0]*3
    list1[1] = list1[1]*2
    counter += 1
print(counter)