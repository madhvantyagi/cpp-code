#include <iostream>
#include <string>
using namespace std;

void happybirthday(string name, int age)
{

    int d = age % 10;
    cout << name << endl;

    if (age >= 120&& age <= 0)
    {
        cout << "ERROR" << endl;
    }
    else
    {
        if (age <= 13 && age >= 11)
        {
            cout << "HAPPY " << age << "th birthday " << name << endl;
        }
        else if (d <= 9 && d >= 4 || d == 0)
        {
            cout << "HAPPY " << age << "th birthday " << name << endl;
        }
        else if (d == 1)
        {
            cout << "HAPPY " << age << "st birthday " << name << endl;
        }
        else if (d == 2)
        {
            cout << "HAPPY " << age << "nd birthday " << name << endl;
        }
        else if (d == 3)
        {
            cout << "HAPPY " << age << "rd birthday " << name << endl;
        }
    }
}
int main()
{

    int age;
    string name;

    while (true)
    {
        cout << "what is your name ? (type 'stop' to exit)" << endl;
        cin >> name;
        cout << "what is you age" << endl;
        cin >> age;

         happybirthday(name, age);
    }

    return 0;
}