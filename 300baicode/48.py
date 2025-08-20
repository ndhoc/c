def tg(a,b,c):
    return a+b>c
a,b,c=map(int,input().split())

if a<0 or b<0 or c<0 or not tg(a, b, c) or not tg(a, c, b) or not tg(b, c, a):
    print("No")
else:
    print("Yes")
    if a==b==c:
        print("Deu")
    elif a==b or b==c or c==a:
        print("Can")
    elif (a*a + b*b == c*c) or (b*b + c*c == a*a) or (c*c + a*a == b*b):
        print("Vuong")
    else:
        print("Thuong")


