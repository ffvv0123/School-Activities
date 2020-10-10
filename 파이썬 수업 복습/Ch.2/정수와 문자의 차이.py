print(100+200)

print("100"+"200")

t = input("정수를 입력하시오: ")
x = int(t)
t = input("실수를 입력하시오: ")
y = float(t)
print(x+y)

#print('나는 현재' +21+'살이다.') --> 오류입니다. 왜냐? + 21 이건 문자열와 숫자가 같이 나온다. 이건 안됩니다.

print('나는 현재' +str(21)+'살이다.')

# str은 숫자를 문자열로 바꿔준다.

x = 'Hi!\n'
print(x*5)

price = 1000
print("상품의 가격은 %s원 입니다." %price) # s = strings(문자열)
