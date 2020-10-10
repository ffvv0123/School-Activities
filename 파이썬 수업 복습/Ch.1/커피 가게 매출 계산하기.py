amer_p = 2000
cafe_p = 3000
capu_p = 3500

amer = int(input("아메리카노 판매 개수: "))
cafe = int(input("카페라떼 판매 개수: "))
capu = int(input("카푸치노 판매 개수: "))

sales = amer_p*amer+cafe_p*cafe+capu_p*capu
print("총 매출은",sales,"입니다.")
