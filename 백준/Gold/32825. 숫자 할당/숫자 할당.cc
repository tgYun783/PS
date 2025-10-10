#include <bits/stdc++.h>
using namespace std;
//2:D(3) 4:H(7) 7:A(0) 9:E(4) 11:F(5) 12:B(1) 13:C(2)G(6)
vector<int>prefix(8);
vector<int>field(14);//1:d 2:h 3:l 4:m 5:a 6:e  7:i 8:b 9:c 10:f 11:g 12:j 13:k
//vector<int>v;
vector<bool>is_used(14,false);
int sum = 0;
int cnt = 0;
void bt(int level)
{
    switch (level)
    {
    case 2:
        if(field[1] + field[2] != prefix[3])
            return;
        break;
    case 4:
        if(field[3] + field[4] != prefix[7])
            return;
        break;
    case 7:
        if(field[5] + field[6] + field[7] + field[3] != prefix[0])
            return;
        break;
    case 9:
        if(field[5] + field[8] + field[9] + field[1] != prefix[4])
            return;
        break;
    case 11:
        if(field[6] + field[10] + field[11] + field[2] != prefix[5])
            return;
        break;
    case 12:
        if(field[8] + field[10] + field[12] + field[4] !=prefix[1])
            return;
        break;
    case 13:
        if(field[9] + field[11] + field[13] != prefix[2])
            return;
        if(field[7] + field[12] + field[13] != prefix[6])
            return;
        cnt++;
        return;
        break;
        
        
    
    default :
        if(level >13)
            return;
    }
    for(int i=1; i<=13; i++)
    {
        if(!is_used[i])
        {
            is_used[i] = true;
            field[level+1] = i;
            bt(level+1);
            field[level+1] = 0;
            is_used[i] = false;
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0; i<8; i++)
    {
        cin >> prefix[i];
    }

    bt(0);
    cout << cnt;

   
}