n=int(input())
s=0
while n>0:
    s+=n%10
    n/=10
print(s%10)
if s%10==9:
    print("Yes")
else:
    print("No")
