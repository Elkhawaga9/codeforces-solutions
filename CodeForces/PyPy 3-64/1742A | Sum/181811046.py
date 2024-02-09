n = int(input())
for i in range(n):
    list1 = list(map(int, input().split()))
    if sum(list1)==2*max(list1):
        print("YES")
    else:
        print("NO")