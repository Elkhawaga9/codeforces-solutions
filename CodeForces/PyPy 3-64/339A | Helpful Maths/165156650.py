q = list(map(int, input().split('+')))
q.sort()
print(q[0], end='')
for item in q[1:]:
    print('+' + str(item), end='')