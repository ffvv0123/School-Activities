#리스트를 알아봅시다.

slist = ['영어','수학','사회','과학']

#          [0]    [1]    [2]    [3]    <-- list number
#          [-4]   [-3]   [-2]   [-1]   <-- special number

list = [] # 공백 리스트 생성

list.append(1)  # list.append()
list.append(2)
list.append('apple')
list.append([1,4,'pear'])

print(list)

print(slist[0]+slist[3])


b = [1,2,3,['a','b','c']]

print(b[0],b[-2],b[3])


# 리스트 b에서 a를 꺼내 보자.

print(b[3][0])

#리스트 속의 리스트는 먼저 리스트 속의 리스트를 선택한 후 다시 선택

c = [1,2,['a','b',['life','is']]]

# life를 뽑아 보자.

print(c[2][2][0])
print(b[2:],b[:2]) # 2 다음부터 끝까지, 2까지


d = [1,2,3,['a','b','c'],4,5]
print(d[2:5]) # 2 3 4 번 출력
print(d[3][:2]) # 3번 뽑고, 거기서 2까지 뽑는다.



#리스트 연산

#리스트 더하기

a = [1, 2]
b = [2, 3]
print(a + b) # [1, 2, 2, 3]

print(a*3) # [1, 2, 1, 2, 1, 2]

a = [1, 2, 3]
a[2] = 4
print(a) #리스트에 2번을 4로 변경

# del함수를 이용해서 리스트 요소를 삭제해보자

del a[1:] # 1번부터 뒤에 다 날린다.
print(a)

#리스트 정렬하기 by. sort함수

a= [1,3,2,4]
a.sort() # 1 2 3 4 로 정렬
print(a)

#리스트 뒤집기. reverse함수

a = [1, 2, 3, 4, 5]
a.reverse()
print(a) #역순 정렬 이딴거 아니고, 그냥 거꾸로

#index함수, 위치 반환이라는데, 리스트 값의 index넘버 출력

a= [1,2,3,1]
print(a.index(1),a.index(1),a.index(2),a.index(1))

#아마도 같은 수가 있을때는, 맨 처음의 넘버가 출력되는듯

# 삽입해보기 insert함수

a= [1,2,3]
a.insert(0,4) # 0번 자리에 4를 넣자
print(a)

a.insert(1,3)
print(a)

#기존에 있던건 뒤로 한칸 밀려난다. (1번에 있던건 2번, 뒤에도 한칸씩 밀림)

#리스트 요소 제거(remove), 처음 나오는 숫자 삭제

a = [1,2,3,4,3]
print(a)
a.remove(3) #처음 나오는 3 삭제
print(a)
a.remove(3) # 남은 3 삭제
print(a)

#리스트의 마지막 요소 꺼내고 삭제 pop함수

a = [1,2,3]
print(a.pop()) # 마지막 요소 꺼내고
print(a) # 꺼낸건 사라짐

#요소의 개수 세기 count

a = [1,2,3,1,2,3,1]

print(a.count(1)) #리스트 a 속에 1의 개수를 알려준다

#리스트 확장 extend

#extend(x) 에서 x에는 리스트만 온다. 원래의 a리스트에 x 리스트 더함

a=[1,2,3]
a.extend([4,5])
print(a) # [1,2,3,4,5]

b = [6,7]
a.extend(b)
print(a) # [1,2,3,4,5,6,7]

b.extend(a) #[6,7,1,2,3,4,5,6,7]
print(b)


























