#include<iostream>
using namespace std;

class Complex {
public:
  int a=8;
  int b=5;
  



   int sum(int e,int f)
  {   a=a+e;
     b=b+f;
     
    cout<<a<<"+ "<<b<<"i"<<endl;
    a=0;
    b=0;
  }
 
    
    int difference(int e,int f){
        int dif= e-f;
        return dif;
    }


};

int main(){

Complex sol;
sol.sum(6,5);





return 0 ;
}