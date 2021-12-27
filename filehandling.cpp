#include<iostream>
#include<fstream>
using namespace std;

//the useful classes for working with files in cpp are:
//fstreambase
//ifstream
//ofstream



//in order work with files in cpp ,you will have to open it ,there are 2 ways to open a file
// USING THE CONSTRUCTOR
//USING THE MEMBER FUNCITON OPEN() OF THE CLASS

int main()
{

// string st="madhav tyagi ";
string st2;
//OPENING FILES USING CONSTRUCTOR AND WRITING IT
// ofstream out("filehandling.txt");
// out<<st;


ifstream in("filehandling.txt");
// in>>st2;
getline(in,st2);
cout<<st2;














return 0;

}