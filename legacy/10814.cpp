#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Person
{
    int age;
    string name;
    int num;

public:
    void insertInfo(int age, string name, int num)
    {
        this->age = age;
        this->name = name;
        this->num = num;
    }
    int showAge() { return age; }
    string showName() { return name; }
    int showNum() { return num; }
    bool operator<(const Person &p) const
    {
        if (age != p.age)
            return age < p.age;
        else
            return num < p.num;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    Person *arr = new Person[n];
    for (int i = 0; i < n; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        arr[i].insertInfo(age, name, i);
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].showAge() << ' ' << arr[i].showName() << '\n';
    }
}