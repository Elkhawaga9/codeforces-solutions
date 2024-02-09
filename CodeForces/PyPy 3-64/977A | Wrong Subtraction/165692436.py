list1 = list(map(int, input().split()))
for i in range(list1[1]):
    if list1[0] % 10 == 0:
        list1[0] /= 10
    else:
        list1[0] -= 1
print(int(list1[0]))