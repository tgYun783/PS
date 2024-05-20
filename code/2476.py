def dice_game():
    a, b, c = map(int,input().split())
    if a == b and a == c and b == c:
        return 10000 + a*1000 
    elif a == b or a == c:
        return 1000 + a*100
    elif b == c:
        return 1000 + b*100
    else:
        return max(a, b, c)*100
    
trys = int(input())
max_prize = 0
now_prize = 0
for i in range(trys):
    now_prize = dice_game()
    if now_prize > max_prize:
        max_prize = now_prize
print(max_prize)