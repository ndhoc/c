import math
a,b,c=map(int,input().split())
cv=a+b+c
p=round(cv/2,3)
s=round(math.sqrt(p*(p-a)*(p-b)*(p-c)),3)
print(f"{cv}\n{s}")
