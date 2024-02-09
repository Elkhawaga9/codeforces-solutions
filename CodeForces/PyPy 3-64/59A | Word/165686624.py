word = input()
low = 0
upp = 0
for i in word:
    if i.islower():
        low += 1
    else:
        upp += 1
if low >= upp:
    print(word.lower())
else:
    print(word.upper())