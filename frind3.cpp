
#include<iostream>
using namespace std;

class Demo 
{
    public :
       int i;

    private : 
       int j;
    protected:
    int k;

    public:
       Demo () 
       {
        i = 10;
        j = 20;
        k = 30;


       }  

   friend void Hello::  Display ();
    
};

void Display () 
{
    Demo obj;
    cout<<"Value of i: "<<obj.i<<"\n";
    cout<<"Value of j: "<<obj.j<<"\n";
    cout<<"Value of k :"<<obj.k<<"\n";
}

class Hello 
 {
    public :
      v/oid Display () 
      
        
 };

int main  () 
{ 
    Display();
     return 0;
}