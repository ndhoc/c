import math

a,b,c = map(int, input().split())
sum = math.ceil(a/2) + math.ceil(b/2) + math.ceil(c/2)
print(sum)
