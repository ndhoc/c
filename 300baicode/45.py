t,n=map(int,input().split())
if t==2:
    if (t%4==0 and t%100!=0) and t%400==0:
        print(29)
    else:
        print(28)
elif t==1 or t==3 or t==5 or t==7 or t==8 or t==10 or t==12:
    print(31)
else:
    print(30)
