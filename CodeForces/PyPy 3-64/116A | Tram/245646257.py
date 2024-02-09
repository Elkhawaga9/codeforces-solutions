t = int(input())
ans = 0
final_ans = 0
for _ in range(t):
    ex,ent = input().split()
    ex = int(ex)
    ent = int(ent)
    ans-=ex
    ans+=ent
    final_ans = max(ans,final_ans)
print(final_ans)