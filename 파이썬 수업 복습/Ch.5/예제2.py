#두 값을 입력받고 더 큰 값을 출력

a = int(input("첫 번째 정수를 입력하세요: "))
b = int(input("첫 번째 정수를 입력하세요: "))

def get_max(a,b):
    if a >= b:
        return a
    else:
        return b

print(a,"와",b,"중 더 큰 값은",get_max(a,b),"입니다.")
