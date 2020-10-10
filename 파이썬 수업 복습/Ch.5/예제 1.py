#정수를 입력받고 제곱을 반환하는 함수

n = int(input("정수를 입력하세요: "))

def square(num):
    return num**2

print("정수의 제곱은", square(n),"입니다.")
