#include<iostream>
using namespace std;

// // int f(int x, int &y) {
// // cout<<x<<endl;
// // x = x + 1;

// // y = x - 1;
// // return x + y;
// // }




// // int allOdd(int arr[][2],int a,int b)
// // {  int i,j;
// //     for( i=0; i<a;i++)
// // {
// //     for( j=0; j<b;j++)
// //     {
// //       if(arr[i][j]%2!=0){
// //          cout<<arr[i][j];
// //       }
// //       else{
// //         //   return 0;
// //       }
// //     }
// // }
// // //  return 0;
// // }

// // 4th question  DOUBT
// // int rotateDigits(int x) {//19683
// // if (x < 10) return x;//
// // int y = x%10;
// //  x =rotateDigits(x/10);
// // // int z =  ;
// // // return  ;
// // }

// //6th question
// // int f(int &x, int y) {
// // x = x + 1;
// // y = y - 1;
// // return x + y;
// // }


// //7th question
// // bool increases(int arr[],int a)
// // {
// //     int count=0;
// //     for(int i=1;i<a;i++)
// //     {
// //         if(arr[i-1]<arr[i]){
// //            count=1;
// //         }else return false;
// //     }
// //     if(count==1)return true;
// // }



// //8th question  DOUBT
int rotateDigits(int x) {// 19683
if (x < 10) return x;
int y = x%10; //3  3  3  3
int z = x%100; //8  6  9  1
x = rotateDigits((x / 100) * 10 + y);//1963   193  13  3
return x ;
}




// //10th question
// // void a(int x[], int y) {
// // x[0] = y;
// // y = x[1];
// // }
// // void b(int x[], int &y) {
// // x[2] = y;
// // y = x[3];
// // }
// // void c(int x[], int y) {
// // if (y < 2) return;
// // cout << x[y + 1];
// // c(x, y/2);
// // }


// //11th why it giving the same no in same pattern
// // void adjust(int arr[],int n)
// // {
// //     int a= rand()%5 -2;
// //     for (int i = 0; i < n; i++)
// //     {    
// //          int a= rand()%5 -2;
// //         cout<<a<<endl;
// //            arr[i]+=a;
// //     }
    
// // }


// //12th quesiton
// // int digitMatch(int a,int b, int c)
// // {int d,e,f,g=0;
// // while(a!=0&&b!=0&&c!=0)
// // {
// // d=a%10;
// // e=b%10;
// // f=c%10;
// // // cout<<d<<endl;
// // // cout<<e<<endl;
// // // cout<<f<<endl;
// // if(d==e&&e==f){
// //     g++;
// // }
// // a=a/10;
// // b=b/10;
// // c=c/10;
// // }
// // return g;


// // }


// //14th question
// // void a(string x[], string y) {
// // x[0] = y;
// // y = x[1];
// // }
// // void b(string x[], string &y) {
// // x[2] = y;
// // y = x[3];
// // }
// // void c(string x[], int y) {
// // if (y < 2) return;
// // cout << x[y - 1];
// // c(x, y/2);
// // }


// // {1,2,3,4,5,6}
// // {0,1,2,3,4,5}

// //15th question
// // void advance(int arr[],int a)
// // {
// //     int c,b;
// //     c=arr[a-1];
// //     for (int i = a-1; i >0; i--)
// //     {
// //        arr[i]=arr[i-1];

// //     }
// //  arr[0]=c;

    
// // }


// // int digitsOpposite(int a, int b)
// // {
// // while(a)
// // }


// //30
// // int fun(int &x, int y) {
// // if (x == y) cout << y;
// // if (x > y) y++;
// // else x++;
// // return x;
// // }


// //31
// // void sumdiff(int a[],int b[],int c)
// // {
// //     for(int i =0; i<c;i++)
// //     {
// //         int temp =a[i]+b[i];
// //         b[i]=b[i]-a[i];
// //         a[i]=temp;
// //     }
// // }



// // 32
// // void display(int x)
// // {   if (x==0)return ;
// //      display(x/10);
// //      for(int i =1; i<=x%10;i++){
// //          cout<<i;
// //      }
// //      cout<<endl;

// // }



// //35
// // void parity(int one[], bool two[], int c)
// // {

// // for(int i=0; i<c; i++)
// // {
// //     if(one[i]%2==0)
// //     {
// //         two[i]=true;
// //     }else two[i]=false;
// // }

// // }



// // 36
// // void display(int a)
// // {    if(a<=0)return;
// //     display(a/10);
// //  for (int i = 9; i >=1; i--)
// //  {
// //      if(i<=a%10)cout<<"X";
// //      else cout<<" ";
// //  }cout<<endl;
 
// // }


// // 207   LOOP APPROACH
// // int doublefirst(int a)
// // {   int d=1;
// //     int b;
// //    int c=a;
// //    while(a!=0){
// //         b=a%10;
       
// //         d=d*10;

// //        a=a/10;
// //    }
// //    int g = (b*d) +c;
// //    return g;
// // }


// // RECURSIVE APPROACH

// // int doublefirst(int x) {
// // if (x < 10) return 11*x;  // in  case 
// // return doublefirst(x / 10) * 10 + x % 10;
// // } 



// // 203
// // int biggestDigit(int x) {//19683
// // if (x < 10) return x;  
// // int ans = biggestDigit(x/10);//1968  196 19  1 
// // if (ans > x % 10) return ans;
// // return x % 10;
// // }





// // 107
// // int add7(int x) {   //  456
// // if (x == 0) return 7;   
// // return add7( x / 10) * 10 + x % 10;  //45   4  7
// // }
//                                     //   45    //7456

// //it passing the value inside recursive approach so  that the reuturn value multiply with 10 again and again.



// // 159

// // int addThrees(int x) {
// // if (x == 0) return 0;
// // return 100 * addThrees(x / 10) + 30 + x % 10;
// // }



// // 179
// int killTwos(int a )
// {
//     if(a<=0)return 0;
   


//    // 123242562
 

// }


// 191



// int doubleEight(int x) {
// if (x % 10 == 8) return 10 * x + 8;
// if (x < 10) return x;
// return  doubleEight(x / 10)*10 + x % 10;
// }




int main()

{
// // int x[4] = {4, 3, 2, 1};
// // int y[6] = {2, 3, 5, 7, 11, 13};
// // cout << y[3] % 7 << endl; // line (a) output==0
// // cout << y[x[1]] << endl; // line (b)output ==7
// // cout << f(x[0], y[0]) << endl; // line (c) output 4,1 output 5
// // cout << y[0] << x[0] << endl; // line (d) output 2,4
// // cout << f(f(x[1], y[1]), x[2]) << endl; // 8

// //3rd question
// // int x[2][2] = {{1, 3}, {5, 7}};

// // cout <<allOdd(x, 2, 2) << endl;

// // int a=234;
// // cout<<a/100<<endl;

// // cout<<rotateDigits(19683)<<endl;


// //6th question
// // int x[4] = {1, 2, 3, 4};
// // int y[6] = {2, 3, 5, 7, 11, 13};
// // cout << y[3] % 9 << endl; // line (a)
// // cout << y[x[1]] << endl; // line (b)
// // cout << f(x[0], y[0]) << endl; // line (c)
// // cout << x[0] << y[0] << endl; // line (d)
// // cout << f(y[2], f(x[1], y[1])) << endl; // line (e)

// //question 7th
// // int x[8] = {1, 3, 3, 7, 9};
// // if (increases(x, 5))
// // cout << "It increases\n"; // prints: It increases
// // else cout << "It does not increase\n";


// 8th question
cout << rotateDigits(19683) << endl;



// // //10th question
// // int x[6] = {1, 2, 3, 4, 5, 6};
// // int y = 3, z = 4;
// // cout << x[y % z] << endl; //4
// // a(x, y);
// // cout << x[0] << y << endl; // 1--->3  3
// // b(x, z);
// // cout << x[2] << z << endl; // 3---->4  4
// // c(x, 4); cout << endl; // 6 4 
// // for (int i = 0; i < 4; i++) c(x, i); cout << endl; // 4 5




// //11th question
// // int x[5]={3,1,4,1,5};
// // adjust(x,5);
// // cout<<endl;
// // cout<<endl;
// // cout<<endl;
// // for (int i = 0; i < 5; i++)
// // {    
// //     cout<<x[i]<<endl;
// // }

// //12th question
// // cout<<digitMatch(168,567,767)<<endl;
// // cout<<digitMatch(143,243,343)<<endl;


// //14th quesiton
// // string x[6] = {"l", "m", "n", "o", "p", "q"};
// // string y = "Queens", z = "College";
// // cout << x[11 % 3] << endl; // n
// // a(x, y);
// // cout << x[0] << y << endl; // queens queens
// // b(x, z);
// // cout << x[2] << z << endl; // college o
// // c(x, 5); cout << endl; // 
// // for (int i = 0; i < 3; i++) c(x, i); cout << endl; // m


// //15th quesiton imp
// // int x[5] = {3,1,4,1,5};
// // advance(x, 5);
// // cout << x[0] << x[1] << x[2] << x[3] << x[4] << endl; // prints 53141



// //16th question 
// // cout << digitsOpposite(17345, 97813) << endl; // prints 2
// // cout << digitsOpposite(13579, 24680) << endl; // prints 5



// //19TH QUESTION DOUBT



// //30 th question doubt 

// // int a[6] = {5, 3, 1, 4, 4, 1};
// // int b = 5, c = 2;
// // cout << a[b] + a[c] << endl; // line (a)
// // cout << fun(b, c) << endl; // line (b)
// // for (int r = 3; r <= 5; r++) cout << fun(r, c); // line (c)
// // cout << endl;
// // cout<<fun(a[5], a[4]); cout << a[4] << endl; // line (d)
// // cout << fun(a[1], a[3]); cout << a[3] << endl; // line (e)


// // 31 imp
// // int one[]={1,2,3,4,5,6};
// // int two[]={6,5,4,3,2,1};

// // sumdiff(one , two, 4);

// // for(int i =0 ; i<4;i++){
// //     cout<<one[i]<<endl;
// //     cout<<two[i]<<endl;
// // }


// // 32//imp

//     // display(31415);


// //35 imp
// // int one []={7,6,8,4};
// // bool two [4];
// // parity(one,two, 4);

// // for (int i = 0; i < 4; i++)
// // {
// //     cout<<two[i]<<endl;
// // }


// // 36 imp tricky
// // display(31415);


// //207  recursive and loop approach both (imp)

// // cout<<doublefirst(19683);

// // 203
// // cout << biggestDigit(29) << endl; // prints 9
// // cout << biggestDigit(31415) << endl; // prints 5




// // 105 important !!!

// // 106  tricky 
// // a)  2
// // b)   1  
// // c)  0
// // d)   1
// // e)    4



// // 107

// // cout << add7(17) << "\n"; // prints 717
// // cout << add7(456) << "\n"; // prints 7456



// // 159 write a function to insert three(3) between each digit





// // 164

// // int arr[3][2]={1,2,3,4,5,6};
// // for(int i =0;i <3;i++){
// //     for (int c = 0; c < 2; c++)
// //     {
// //         arr[i][c]=( arr[i][c]* arr[i][c]);
// //     }
    
// // }



// // 162 when we cout the function cout statements and return element both prints
// // x=3,y=-1
// // a) 3
// // b) 13 
// // c) 51
// // d) 35
// // e) 15

// // 173// telling how many elements are odd in 2d array



// // 176 2-d function to find the difference between largest 2-d element and smallest 2-d element
// // int arr2[3][4]={4,5,6,2,9,7,8,3,5,6,7,1};

// // int max=arr2[0][0], min=arr2[0][0];
// // for (int r = 0; r < 3; r++)
// // {
// //     for (int c = 0; c < 4; c++)
// //     {
// //         if(min>arr2[r][c]) min= arr2[r][c];
// //         if(max<arr2[r][c])max=arr2[r][c];
// //     }
// // }

// // cout<<max-min<<endl;


// // 179 deltelting one specific kind digit from the integer

// // killTwos(9739723302323225245312852);



// // 188 copy 2d array element to 1d array elements in row by row sequence


// //191 recursive function that inserts 8 after  where ever the 8 comes from last
// 19683   196883

\]







// cout << doubleEight(271828) << endl;

// // // 199 find smalllest digits 

// int smallestDigit(int x) {
// if (x < 10) return x;           // if i  write something above recursive code it will run backward to forward cuz it moving 
// int ans = smallestDigit(x/10);
// if (ans < x % 10) return ans;     // if we write below the recursive code we are moving forward to backward
// return x % 10;
// }


// //203 to find the largest digit
// int biggestDigit(int x) {
// if (x < 10) return x;
// int ans = biggestDigit(x/10);
// if (ans > x % 10) return ans;
// return x % 10;
// }

// // 56 recursive is_function




// //193 inserts extra 2 digit after the first digit  79 //729
// int extraTwo(int x) {
// if (x < 10) return 10 * x + 2;
// return 10 * extraTwo(x / 10) + x % 10;
// }


// //207 inserts an extra copy of first number at the start of number
// //19  //119
// int doubleFirst(int x) {
// if (x < 10) return 11*x;
// return doubleFirst(x / 10) * 10 + x % 10;
// }

// //211
// // cout << dropSecond(19683) << endl; // prints 1683, the 9 dropped
// int dropSecond(int x) {   // if we wanna delete particular number 
// if (x < 10) return x;
// if (x < 100) return x / 10;  // then we come to that digit return a digit forward to it.
// return dropSecond(x / 10) * 10 + x % 10;
// }

// // 215   return first two digit of binary form of number
// int startBinary(int x) {
// if (x < 2) return x;
// if (x == 2) return 10;
// if (x == 3) return 11;
// return startBinary(x/2);
// }


// double digit input
// int doubleDigit(int n) {
// if (n < 10) return n * 11; //we are defining the base case trying to multiply 
// return 100 * doubleDigit(n / 10) + doubleDigit(n % 10);
// }         



// // 64  finding the greatest common ending
// // 1234  134   --->34
// int gce(int x, int y) {
// if (x == 0) return 0;
// if (x % 10 != y % 10) return 0;
// return 10 * gce(x / 10, y / 10) + x % 10;
// }



// int cut(int x)
// {
//     if(x%10==7)return x;
//     if(x<10)return x;
//      return cut(x/10);
// }




return 0;
}
