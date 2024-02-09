list1 = list(map(int, input().split()))
list2 = list(map(int, input().split()))
advancers = 0
for i in list2:
     if i >= list2[list1[1]-1] and i !=0 :
      advancers += 1
print(advancers)