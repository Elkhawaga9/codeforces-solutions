word = input().lower()
voules = ["a", "o", "y", "e", "u", "i"]
word2 = ''
for char in word:
    if char in voules:
        pass
    else:
        word2 = word2 + '.' + char
print(word2)