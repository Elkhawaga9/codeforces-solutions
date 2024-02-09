no = int(input())
list1 = []
for i in range(no):
    wo = input()
    list1.append(wo)
for word in list1:
    if len(word) > 10:
        print(word[0] + str(len(word)-2) + word[len(word)-1])
    else:
        print(word)