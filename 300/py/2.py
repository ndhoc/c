def check(n):
    if n==0:
        return "La so 0"
    elif n>0:
        return "La so duong"
    else:
        return "La so am"
    
try:
    n = int(input("Nhap so: "))
    print(check(n))
except ValueError:
    print("So vua nhap khong hop le")