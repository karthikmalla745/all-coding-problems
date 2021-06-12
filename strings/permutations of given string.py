from itertools import permutations

n=int(input())
for _ in range(n):
    s=input()
    
    ans=permutations(s)
    
    for i in list(ans):
        print(''.join(i))