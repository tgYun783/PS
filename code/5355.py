a = int(input())

for i in range(a):
    problem = input().split()
    temp = float(problem[0])
    for n in range(len(problem) - 1):
        if problem[n + 1] == '@':
            temp *= 3
        elif problem[n + 1] == '%':
            temp += 5
        elif problem[n + 1] == '#':
            temp -= 7
        else:
            continue
    print("{:.2f}".format(temp))

