#include<iostream>
using namespace std;


bool bothpositive(double a, double b)
{
    if(a>=0&&b>=0){
        return true;
    }else{
        return false;
    }
}


int main()
{
cout<<bothpositive(2.4,6.3);




    return 0;
}