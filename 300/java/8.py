a = int(input())
b = int(input())
p = 21*a+5*b-2009
q = (21*a*a-5*b)/(2009*b*b)
r = (21*a+5*b*b)/(2009*b+15)
print(str(p) + " " + str(round(q,4)) + "\n" + str(round(r,6)))
