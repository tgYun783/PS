#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin, s);
    int ph = 0;
    int pg = 0;
    
    unordered_set<char>happy;
    unordered_set<char>sad;
    happy.insert('H');happy.insert('A');happy.insert('P');happy.insert('Y');
    sad.insert('S');sad.insert('A');sad.insert('D');
    
    for(int i=0; i<s.length(); i++)
    {
        auto t = s[i];
        auto hi = happy.find(t);
        auto si = sad.find(t);
        if(hi != happy.end())
            ph++;
        if(si != sad.end())
            pg++;
    }
    if(ph == 0 && pg == 0)
    {
        cout << "50.00";
        return 0;
    }
    double H = (double)(ph) / (double)(ph + pg) * 100;
    H += 1e-9;
    printf("%.2f",H);
}