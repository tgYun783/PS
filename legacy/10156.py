one_price, amount, have_money = map(int, input().split())

print(max(one_price*amount - have_money, 0))
