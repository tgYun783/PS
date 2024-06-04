#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Word
{
    string s;
    int bindo;
    int len;

public:
    Word(string s = "")
    {
        this->s = s;
        bindo = 0;
        len = s.size();
    }
    void changeBindo()
    {
        bindo++;
    }
    int getBindo()
    {
        return bindo;
    }
    int getLen()
    {
        return len;
    }
    string getString()
    {
        return s;
    }
    bool operator<(const Word w)
    {
        if (this->bindo != w.bindo)
            return this->bindo > w.bindo;
        else if (this->len != w.len)
            return this->len > w.len;
        else
            return this->s < w.s;
    }
};

class Note
{
    map<string, Word> note;

public:
    void insert(string s);

    void getResult();
};
void Note::insert(string s)
{
    if (note.find(s) != note.end())
        note[s].changeBindo();
    else
        note[s] = Word(s);
}

void Note::getResult()
{
    vector<Word> temp;
    for (auto &pair : note)
    {
        temp.push_back(pair.second);
    }
    sort(temp.begin(), temp.end());

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i].getString() << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    Note note;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.size() >= m)
            note.insert(s);
    }

       note.getResult();
}