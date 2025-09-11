total = []
for i in range(3):
    a, b = map(int,input().split())
    temp = [a, b]
    total.append(temp)
x = []
y = []
answer = []
for n in total:
    if n[0] not in x:
        x.append(n[0])
    else:
        x.remove(n[0])
    if n[1] not in y:
        y.append(n[1])
    else:
        y.remove(n[1])

print(f"{x[0]} {y[0]}")