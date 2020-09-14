count = 0
arr = []

for i in range(0,10):
    num = int(input())
    arr.append(num % 42)

for k in range(0,42):
    if arr.count(k)>=1:
        count+=1

print(count)
    


