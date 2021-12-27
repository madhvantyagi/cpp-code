#include<iostream>
using namespace std;




// int smallestDigit(int x) {
// if (x < 10) return x;
// int ans = smallestDigit(x/10);
// cout<<ans<<endl;
// if (ans < x % 10) return ans;
// return x % 10;
// }



// int recursive(int a)
// {
//     if(a<10)return a ;
//     recursive(a/10);
//     cout<<a<<endl;
// }


// int rotate(int x)
// {
//     if(x<10)return x;
//     int y = x%10;
// cout<<y<<"y"<<endl;
//   int z= x%10;
//  if(x>=0)
// return (y/10)*100+10*y +z;
//     x=rotate(x/10);
 
//       cout<<z<<"z"<<endl;
   


// }



// int cut(int x)
// {
//     if(x%10==7)return x;
//     if(x<10)return x;
//      return cut(x/10);
// }


// int oddone(int x)
// {   int y;
//     if(x<=0)return -1;
//     if(x>=10){
//        y= oddone(x/10);
//     };

//     if(y%10%2!=0)return y;
 
//  };

int main(){

// recursive(12345);

// smallestDigit(4798520);

cout<<rotate(1234);

// cout<<cut(2784);

// cout<<oddone(234)


    return 0;
}