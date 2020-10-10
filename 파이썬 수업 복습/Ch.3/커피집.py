ame_no = int(input("아메리카노는 몇잔? "))
caf_no = int(input("카페라테는 몇잔? "))
cap_no = int(input("카푸치노는 몇잔? "))

money = int(input("얼마 있으십니까? "))

charge = 0
charge += ame_no * 2500
charge += caf_no * 3000
charge += cap_no * 3000

print("총 금액은",charge,"입니다.")

if (money>=charge):
    print("거스름돈은",money-charge,"원 입니다.")

else:
    print("돈이 모자랍니다. 더 가져와요.")

