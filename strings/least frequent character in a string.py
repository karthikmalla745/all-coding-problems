from collections import Counter
n=int(input())
for _ in range(n):
    s=input()
    ans=Counter(s)
    ans=min(ans,key=ans.get)
    print(ans)