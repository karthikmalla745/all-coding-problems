n=int(input())
for _ in range(n):
    s=input()
    
    if (s==s[::-1]):
        print("yes")
    else:
        print("no")