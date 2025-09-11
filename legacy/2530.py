hour, minute, sec = map(int,input().split())
time_taken = int(input())

sec += time_taken
temp = 0


temp = (sec // 60)
sec -= (temp * 60)
minute += temp

temp = (minute // 60)
minute -= (temp * 60)
hour += temp

while hour >= 24:
    hour -= 24

print(f'{hour} {minute} {sec}')