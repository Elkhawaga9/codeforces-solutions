n = int(input())
for i in range(n):
    val = 1
    items = int(input())
    list1 = list(map(int, input().split()))
    list1.sort()
    for j in list1:
        if list1.count(j)>1:
            val+=1
    if val > 1:
        print("NO")
    else:
        print("YES")