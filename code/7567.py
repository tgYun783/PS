height = 10
module = input()
for i in range(len(module) - 1):
    if module[i] == module[i + 1]:
        height += 5
    else:
        height += 10
print(height)