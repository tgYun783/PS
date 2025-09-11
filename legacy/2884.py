hour, minite = map(int,input().split())
minite -= 45
if minite < 0:
    hour -= 1
    minite += 60
if hour < 0:
    hour += 24
print(f"{hour} {minite}")