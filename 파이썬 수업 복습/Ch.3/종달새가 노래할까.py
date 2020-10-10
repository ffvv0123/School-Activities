import random

time = random.randrange(24)

weather = random.randrange(4)

print("지금 시간은",time,"시 입니다.")

if weather == 0 :
    print("지금 날씨는 화창합니다.")

elif weather == 1 :
    print("지금 날씨는 흐립니다.")

elif weather == 2 :
    print("지금 날씨는 비가 옵니다.")

elif weather == 3 :
    print("지금 날씨는 눈이 옵니다.")

if ((time>=6 & time<=9) & (weather == 0)):
    print("종달새가 노래합니다.")

else:
    print("종달새가 노래하지 않습니다.")
