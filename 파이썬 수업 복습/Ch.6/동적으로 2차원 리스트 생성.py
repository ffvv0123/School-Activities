#동적으로 2차원 리스트 생성

rows = 3
cols = 5

s = []
for row in range(rows):
    s += [[0]*cols]

print("s=",s)
