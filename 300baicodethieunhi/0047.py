import math
n=int(input())
if n<0:
    print("No")
    
elif int(math.sqrt(n))*int(math.sqrt(n))==n:
    print("Yes")
else:
    print("No")
