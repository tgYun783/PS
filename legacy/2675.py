a = int(input())

for i in range(a):
    temp = input().split()
    rep = int(temp[0])#반복횟수
    case = str(temp[1])#문자
    answer = ""
    for n in range(len(case)):
        temp = case[n]#문자 지정
        temp *= rep#문자 반복수만큼 곱하기
        answer += temp#출력에 더하기
    print(answer)

        


    
