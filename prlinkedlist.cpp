#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* agla;

    node()
    {
        data=0;
        agla=NULL;
    }
    node(int data)
    {
        this->data=data;
        this->agla=NULL;
    }
};

class Linkedlist{
    node* head;
    public:
    Linkedlist(){head=NULL;}

    void insertnode(int);

    void printnode();

    void deletenode(int);
    

};

void Linkedlist::insertnode(int data)
{
node *node2=new node(data);//when there is no node present;
if (head=NULL)
{
    head=node2;
    return;
}


node * temp=head;
while (temp->agla!=NULL)
{   
    temp=temp->agla;

}

temp->agla =node2;

}


void Linkedlist::deletenode(int index)
{
    if(head=NULL){
         cout<<"linked list is empty";
         return;
    }
  
  node* temp= head;
  int length=0;

    while (temp!=NULL)//because in the insert code case there is possible that there is no node present so head-NULL so we traverse till 
    {
         temp=temp->agla; //7 node=NULL NODE   
         length++;\

    }

    if(index>length)
    {
        cout<<"node doesnot exist"<<endl;
        return;
    }
    int a=1;
  while (a!=index)
  {
      temp=temp->agla;//temp==3 index when we are deleting temp so we are deleting actual node?
      a++;
    
  }
  
  delete temp;





}


















int main()
{
    
    
    

    
    
    
    
    
    
    
    return 0;
}