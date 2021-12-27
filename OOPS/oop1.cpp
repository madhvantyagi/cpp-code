#include<iostream>
using namespace std;


class Employee{
 public:
  string name;
  string company;
  int age;

void introduceyourself()
{
    cout<<"name"<<name<<endl;
    cout<<"company"<<company<<endl;
    cout<<"age"<<age<<endl;
}
Employee(string name, string company, int age){
name=name;
company=company;
age=age;
}
};







int main()
{
int number;

Employee employee1=Employee("saldina","youtube",34);

// employee1.name="saldina";
// employee1.company="ytcond";
// employee1.age=25;

// employee1.introduceyourself();
Employee employee2=Employee("john","car",4);







    return 0;
}