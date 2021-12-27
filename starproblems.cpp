#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()

{
    // the back star code
    //  int n;
    //  cout<<"enter the numbers"<<endl;
    //  cin>>n;//5

    // for (int i =n; i>=1; i--)//i=3  this one  rows
    // {            //j=3
    //     for (int j =i; j>=1; j-- ){ //this line is printing single stars in a row
    //         cout<<"*";
    //     } // 3,2,1
    //     cout<<endl;
    // }

    // int n, s, i, j;
    // cout << "Enter number of rows: ";
    // cin >> n;
    // for(i = n; i >= 1; i--)
    // {  //i=5
    // //for loop to put space
    //     //s=i=4  n=5 s++ which increase s.
    // for(s = i; s < n; s++)
    // cout << " ";
    // //for loop for displaying star
    //             //  (2*5 -1 =9)
    // for(j = 1; j <= (2 * i -1); j++)
    // cout << "* ";
    // // ending line after each row
    // cout << "\n";
    // }

    // code for straight pryamid
    // int n, s, i, j;
    // cout << "Enter number of rows: ";
    // cin >> n;
    // for(i = 1; i <= n; i++)
    // {
    // //for loop for displaying space
    // //s =1   s<5
    // for(s = i; s < n; s++)
    // {
    // cout << " ";
    // }
    // //for loop to display star equal to row number
    // for(j = 1; j <= (2 * i - 1); j++)
    // {
    // cout << "*";
    // }
    // // ending line after each row
    // cout << "\n";
    // }


    // int n ;
    // cin>>n;
    
    // for(int i =n; i>=1;i--){

    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // int n;
    // cin>>n;
    // for(int i =n;i>=1;i--){
    //     for(int j =i;j<n; j++){
    //         cout<<" ";
    //     }             //(2*5 -1 =9 )
    //     for(int z=1; z<=2*i-1;z++){
    //      cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // int n;
    // cin>> n;
    // for(int i =1;i<=n;i++){
    //     for(int j =n;j>i;j--){
    //         cout<<" ";
    //     }
    //     for(int z = 1; z<=i;z++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // HILL SHAPE PROBLEM;
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n;i>1;i--){
    //     for(int j=i;j>1;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cout<<"enter the numbers of rows";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=i; j<=n;j++){
    //         cout<<" ";
    //     }
    //     for(int z= 1;z<=i;z++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // int n;
    // cin>>n;
    // for(int i =n; i>1;i--){
    //     for(int j =i; j<=n;j++){
    //         cout<<" ";
    //     }
    //     for(int z = i ; z>1;z--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // double x = 81.0, y = 49.0, z = 36.0;
    // string a = "az", b = "za";
    // cout << sqrt(y) << endl; // line (a)
    // cout << sqrt(y) + sqrt(x) << endl; // line (b)
    // if ((x + y) == z) cout << b << endl; // line (c)
    // cout << a << "a" << "b" << b << endl; // line (d)
    // if (a == "b") cout << z; else cout << x; // line (e)
    // cout << endl;

    // int n, i, j;
    // cout << "Enter number of rows: ";
    // cin >> n;
    // for(i = 1; i <= n; i++)
    // {
    // for(j = i; j < n; j++)
    // {
    // cout << " ";
    // }
    // for(j = 1; j <= i; j++)
    // {
    // cout << "*";
    // }
    // cout << "\n";
    // }
    // for(i = n; i >= 1; i--)
    // {
    // for(j = i; j <= n; j++)
    // {
    // cout << " ";
    // }
    // for(j = 1; j < i; j++)
    // {
    // cout<<"*";
    // }
    // // ending line after each row
    // cout<<"\n";
    // }

    // PROGRAM TO PRINT HOLLOW STAR TRIANGLE

    //     int r, i, j, s;
    // cout << "Enter number of rows: ";
    // cin >> r;
    // for(i = 1; i <= r; i++)
    // {
    // //for loop to put space in pyramid
    // for(s = i; s < r; s++)
    // cout << " ";

    // // //for loop to print star
    // for(j = 1; j <= (2 * r - 1); j++)
    // {
    // if(i == r || j == 1 || j == 2*i - 1)
    // cout << "*";
    // else
    // cout << " ";
    // }
    // //ending line after each row
    // cout << "\n";
    // }

    //ANOTHER WAY OF X PATTERN
    // int n;
    // cin >> n;
    // for (int a = 1; a <= n; a++)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "x";
    //         }
    //         cout << endl;
    //     }

    //     for (int z = 1; z <= n; z++)
    //     {
    //         cout << "_";
    //     }
    //     cout << endl;

    //     for (int d = n; d >= 1; d--)
    //     {
    //         for (int j = d; j <= n; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int z = 1; z <= d; z++)
    //         {
    //             cout << "x";
    //         }
    //         cout << endl;

    //     }

    //         for (int i = 1; i <= n; i++)
    //         {
    //             cout << "_";
    //         }cout<<endl;

    //     }

    // ANOTHER WAY OF X PATTERN

    //THE TRIANGLE PROBLEM OF X

    // int n;
    // cout << "Enter the number of triangles: ";
    // cin >> n;
    // cout << endl;
    // for (int t = 1; t <= n; t++)
    // for (int r = 1; r <= n + 1; r++) {
    // for (int c = 1; c <= n; c++)
    // if (r == n + 1) cout << "-";
    // else if (t % 2 == 1 && c <= r) cout << "X";
    // else if (t % 2 == 0 && c >= r) cout << "X";
    // else cout << " ";
    // cout << endl;
    // }


//DIAGONAL PATTERN QUESTION
//     int n;
//     cout << "Enter the number of diagonal lines: ";
//     cin >> n;
  
//     cout << endl;
  
//   for(int i =1;i<=n;i++){
//     for (int r = 1; r <= n; r++)
//     {
        
//             for (int c = 1; c <= n; c++)
//                 if ( c == r)
//                     cout << "X";
//                 else if ( c + r == n + 1)
//                     cout << "X";
//                 else
//                     cout << " ";
//         cout << endl;
//     }
//     // cout<<endl;
//   }




// int n;
// cout << "Enter a positive integer n: ";
// cin >> n;
// if (n <= 0) return 0;
// for (int r = 1; r <= n; r++) {
// for (int c = 1; c <= n; c++) {
// int x = r;
// if (c >= r) x = c;
// if (x % 2 == n % 2) cout << "#";
// else cout << "o";
// }
// cout << endl;
// }

// int a;



// int a=3;
// int b=4;
// int c=a/b;
// cout<<c<<endl;

cout<<"<----------------PROGRAM END HERE -------------------------------->";

















    return 0;
}