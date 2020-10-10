print("=========")
num = int(input("네자리 정수를 입력하시오: "))

a = num // 1000
b = (num % 1000) // 100
c = (num //10) % 10
d = num % 10

sum = a+b+c+d

print("자리수의 합=",sum)
