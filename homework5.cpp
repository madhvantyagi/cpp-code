//MADHVAN TYAGI

#include <iostream>
using namespace std;

int isPrime();//i just declare  the function here and declare then below

bool isPrime(int a);

int biggestDigit(int x)
{
  
  // cout<<"hello world";
  int s = 0;
  int b = 9;
  int largest;

  while (x > 0)// here just running a loop until we our entered no gets 0
  {
   
    largest = x % 10;// it helps to get last digit of int;

    if (s < largest)//we updating int to eneterd last digit
    //if it is greater then we making the int to that digit 
    {
      s = largest;
    }

    x = x / 10; //traversing over the rest of digits it gives us rest of digits other than last
  }
  
  return s;
};



void printing(int a)
{
  cout << a << endl;
};

int main()
{
 cout<<"enter the no greater than the 1000"<<endl;
 int x;
 cin>>x;

int a=5;
while(x<1000)
{
 
  cout<<" your remaining attempts  "<<a<<endl;
  a--;
  cin>>x;
}

cout<<endl;
cout<<endl;

cout<<"the biggest digit of the numbere you entered "<<biggestDigit(x)<<endl;
cout<<endl;
cout<<endl;

isPrime();


 


  return 0;
}

int isPrime()
{

  for (int i = 2; i < 100; i++)
  {
    int checker = 0;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)//simple brute force approach just checking 
      //if no divisible by the present no if yes then its not prime
      {
        checker = 1;
      }
    }

    if (checker == 0)//but if then print the no;
      cout << i << endl;
  }
}

int checker = 0;
bool isPrime(int a)
{
  checker = 0;
  for (int j = 2; j < a; j++)
  {
    if (a % j == 0)
    {
      checker = 1;
    }
  }

  if (checker == 0)//simple brute force approach if checker==0 which means our above
  //not satisfied which means above no is prime
    return true;
  else
    return false;
}

