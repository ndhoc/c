n = int(input())
h = n//3600
n %= 3600
m = n//60
n %= 60
print(str(h) + ":" + str(m) + ":" + str(n))
