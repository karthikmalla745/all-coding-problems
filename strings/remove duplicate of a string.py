from collections import OrderedDict
n=int(input())
for _ in range(n):
    s=input()
    print("".join(OrderedDict.fromkeys(s)))