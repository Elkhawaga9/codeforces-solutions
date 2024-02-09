no = int(input())
x = []
y = []
z = []
for i in range(no):
    items = list(map(int, input().split()))
    x.append(items[0])
    y.append(items[1])
    z.append(items[2])
if sum(x) == 0 and sum(y) == 0 and sum(z) == 0:
    print('YES')
else:
    print('NO')