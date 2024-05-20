num = int(input())
while num != 1:
    i = 2
    while True:
        if num % i == 0:
            num = int(num / i)
            print(i)
            break
        else:
            i += 1