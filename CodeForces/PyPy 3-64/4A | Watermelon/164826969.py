w = int(input())
counter = 0
for i in range(w):
    if i > 0 and i % 2 == 0 and (w-i) % 2 == 0:
        counter += 1
if counter >= 1:
    print('YES')
else:
    print('NO')