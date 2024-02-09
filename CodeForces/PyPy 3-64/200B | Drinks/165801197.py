x = int(input())
mylist = list(map(int, input().split()))
res = 0
for i in mylist:
    res = res + (1/x)*i
print(res)