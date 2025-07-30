n = int(input())
five = n//5000
n -= five*5000
two = n//2000
n -= two*2000
print(five, two, n//1000)
