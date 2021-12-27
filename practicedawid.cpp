#include<iostream>
using namespace std;






string maskDigits(int a) {
if (a <= 0) return "";
return "*" + maskDigits(a / 10);
}



int count(int a){//a=12345
   int c=0;
    while(a!=0){//this programm should run
      int b=a%10;  //b=5; b=4 b=3 b=2 b=1
      c+=1;   //c=1; c=2 c=3 c=4 c=5
cout<<"*";    //*****
      a=a/10;  //a=1234 a=123 a=12 a=1 a=0




    }
}




int main()
{
// cout << maskDigits(19683) << endl;//*****c

count(234);










    return 0;
}