import math
a,b,c=map(int, input().split())
p=(21*a*a+5*b*b)/(2009*c*c+15)
q=math.sqrt(a*a-2*b)/(3*c*c+4)
print(str(round(p,4))+" "+str(round(q,4)))
