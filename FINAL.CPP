#include<iostream>
using namespace std;

void recurse(int a, string b[],int c)
{
if(a==c)cout<<b[a-1];
else cout<<b[0];
if(c<=0)return;
recurse(a,b,c/2);


}





int main(int argc,char *argv[]){

string words[3]={"121","656","989"};
string id = argv[1];
string month=argv[2];

string newID=month.insert(0,id);
cout<<newID<<endl;
if(words[1].length()<=argc)cout<<"lucky!"<<endl;else cout<<"good job!"<<endl;
cout<<words[2].rfind("9")<<endl;
if(id.size()%2==1)id=id.erase(id.size()-1,1);
for(int i=0;i<id.size();i+=2){cout<<id.substr(i,2)<<"*";}
cout<<endl;
recurse(argc,words,3);














    return 0;
}