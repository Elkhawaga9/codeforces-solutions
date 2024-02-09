l = list(map(int, input().split()))
l.sort()
print(l[0], end=' ')
print((l[1]-l[0])//2)