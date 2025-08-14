n = abs(int(input()))
i = n
if n == 0:
    print("INF")
else:
    while i>0:
        if n%i==0:
            print(i,end=" ")
        i-=1

