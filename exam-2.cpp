#include<iostream>
using namespace std;



void oddOrEven(int a[],string b[],int c)
{
    for (int i = 0; i < c; i++)
    {
        if(a[i]%2==0)b[i]="even";
        else b[i]="odd";
    }
    
}


int digitChange(int x)
{
    if(x<=0)return 0;
    if(x%10==9){return digitChange(x/10)*10 + x%10 -8; };
    return digitChange(x/10)*10 +x%10 +1;
}





int main()
{


int input[3] = {8, 1, 10};
string output[3];
oddOrEven(input, output, 3); // output now stores {"even", "odd", "even"};
          
cout<<digitChange(123493);


return 0;




}