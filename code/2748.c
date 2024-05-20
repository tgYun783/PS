#include <stdio.h>
#include <string.h> //memset을 이용하기 위하여
unsigned long long fibo(int cnt,unsigned long long savefibo[]){ //int일 때 47항에서 오버플로우가 생겨서 unsigned long long 이용
      if(cnt == 1){
           savefibo[0]=0;
            return 0;
       }
       else if(cnt == 2){
            savefibo[1]=1;
             return 1;
       }
       else{
            savefibo[cnt-1]=fibo(cnt-1, savefibo)+savefibo[cnt-3];
            return savefibo[cnt-1];
       }
}
int main(){
        int cnt,num=0;
        scanf("%d",&num);
        unsigned long long temp;
        unsigned long long savefibo[num];
        memset(savefibo, 0, num*sizeof(savefibo[0]));//배열을 0초기화
        for(cnt= 1;cnt<=num+1;cnt++)
        {
                temp = fibo(cnt, savefibo);
        }
        printf("%lld",temp);
        return 0;
}