n=input().strip()
s=sum(int(c) for c in n)
x=s%10
print(x)
if x==9:
    print("Yes")
else:
    print("No")