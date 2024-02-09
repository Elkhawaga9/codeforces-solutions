no = int(input())
l = list(map(str, input()))
if l.count('A') > l.count('D'):
    print('Anton')
elif l.count('A') < l.count('D'):
    print('Danik')
else:
    print('Friendship')