import random

list = []

for i in range(0, 1000):
    list.append(random.randrange(1,7))


print("주사위가 1인 확률은 ",list.count(1)/1000)
print("주사위가 2인 확률은 ",list.count(2)/1000)
print("주사위가 3인 확률은 ",list.count(3)/1000)
print("주사위가 4인 확률은 ",list.count(4)/1000)
print("주사위가 5인 확률은 ",list.count(5)/1000)
print("주사위가 6인 확률은 ",list.count(6)/1000)
