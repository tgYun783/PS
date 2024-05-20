hour, minute = map(int,input().split())
time_taken = int(input())

minute += time_taken

while minute >= 60:
    minute -= 60
    hour += 1
while hour >= 24:
    hour -= 24

print(f'{hour} {minute}')