#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
fstream myFile;
// myFile.open("saldina.txt",ios::out);//write
// if(myFile.is_open()){

// myFile<<"hello\n";
// myFile<<"this is a second line\n";
// myFile.close();

// }


// myFile.open("saldina.txt",ios::app);//this app is use to add the text in already existing text in the file.
// if(myFile.is_open()){

// myFile<<"hello\n";
// myFile<<"this is a second line\n";
// myFile.close();
// }

myFile.open("saldina.txt",ios::in);  //read
if(myFile.is_open()){
    string line;
    while(getline(myFile,line)){
cout<<line<<endl;

    }

    myFile.close();
}






    system("pause>0");
}