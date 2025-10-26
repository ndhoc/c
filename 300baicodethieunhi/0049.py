n = int(input())

if n == 1:
    print(12000)
elif 2 <= n <= 30:
    print(12000 + (n - 1) * 10000)
else:
    print(12000+29*10000+(n-30)*9000)
