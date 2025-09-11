a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
list_up = [a, b, c, d, e]
for i in range(len(list_up)):
    if list_up[i] < 40:
        list_up[i] = 40
print(int(sum(list_up) / len(list_up)))