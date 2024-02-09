no_problems = int(input())
counter = 0
if no_problems>=1 and no_problems<=1000:
    for line in range (no_problems):
        answer_list = list(map(int, input().split()))
        if answer_list.count(1)>=2:
            counter+=1
print(counter)