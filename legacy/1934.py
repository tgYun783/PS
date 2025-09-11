def gcd(x,y):#최대공약수 함수
    while y:
        x, y = y, x % y
    return x
def LCM(x,y):
    result = (x*y) // gcd(x,y)
    return result

test_case = int(input())
for i in range(test_case):
    a, b = map(int,input().split())
    print (LCM(a, b))