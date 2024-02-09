no =int(input())
res = 0
for i in range (no):
 op = input()
 if '++' in op:
  res = res +1
 elif '--' in op:
  res = res-1
print(res)