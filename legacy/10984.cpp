#include <iostream>
using namespace std;

int main()
{
    int test, subject,  credit=0, credit_input;
    float grade=0.0, grade_input;

    cin >> test;
    for (int i=0; i<test; i++)
    {   
        credit = grade = 0;
        cin >> subject;
        for (int j=0; j<subject; j++)
        {
            cin >> credit_input >> grade_input;
            credit += credit_input;
            grade += credit_input*grade_input;
        }
        cout << fixed;
        cout.precision(1);
        cout << credit<< ' ' << grade/credit << endl;
    }

}