s = input()
t = len(s)-1
ans = ""


while t>=0:
    ans += s[t]
    t-=1

print(int(ans))
