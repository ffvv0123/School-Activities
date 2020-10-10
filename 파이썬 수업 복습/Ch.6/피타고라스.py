#한 변의 길이가 1부터 30 이하인 직각 삼각형을 모두 찾기

list = [(x,y,z) for x in range(1,30) for y in range(x,30) for z in range(y,30) if x**2 + y**2 == z**2]

print(list)
