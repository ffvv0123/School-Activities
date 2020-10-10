import random

val = random.randint(1,10)

num = int(input("1~10"))

if num == val:
    print("정답입니다.")

elif num < val:
    print("입력한 값보다 답이 큽니다.")
    print("답은",val,"입니다.")

else:
    print("입력한 값보다 답이 작습니다.")
    print("답은",val,"입니다.")  
