#include <iostream>
#include <string>
using namespace std;

int main() {

   char a[20]{'0',};
  cin>>a;
  int b=0;
  for(int i=0;i<20;i++){

    if(a[i]=='A'||a[i]=='B'||a[i]=='C'){
      b=b+3;
    }
    if(a[i]=='D'||a[i]=='E'||a[i]=='F'){
       b=b+4;
    }
    if(a[i]=='G'||a[i]=='H'||a[i]=='I'){
       b=b+5;
    }
    if(a[i]=='J'||a[i]=='K'||a[i]=='L'){
       b=b+6;
    }
    if(a[i]=='M'||a[i]=='N'||a[i]=='O'){
       b=b+7;
    }
    if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S'){
       b=b+8;
    }
    if(a[i]=='T'||a[i]=='U'||a[i]=='V'){
       b=b+9;
    }
    if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z'){
       b=b+10;
    }
    
  }

  cout<<b;
}