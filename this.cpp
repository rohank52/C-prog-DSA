

//this.cpp .....

#include<iostream>

using namespace std;

class Demo
{
  public:
       int i;
       int j;
       int k; 
         //Demo (Demo *this )
       Demo (int a = 10,int b = 20, int c = 30)
       {   
        cout<<"Value of this is : " <<this<<"\n";

          this-> i = a;
          this-> j = b;
          this-> k = c;

       } 

       void Fun(int No1, int No2)
       {
        cout<<"Inside fun\n";
        cout<<"Value of i" <<this->i<<"\n";
        cout<<"Value of j" <<this->j<<"\n";  
        cout<<"Vaule of k" <<this->k<<"\n";

       }  

       void Display()
       {
        cout<<"Inside Display\n";
       }
}; 

int main() 
{  

    Demo obj1;
    Demo obj2(11,21,51);

    obj1.Fun(5,6);   //fun (&obj1,5,6)
                     //fun(100,5,6)
    obj2.Fun(8,9);    //fun(&obj2,8,9)
                      //fun (200,8,9)

    obj1.Display();  //display (&obj1);
    obj2.Display();   //dispaly (&obj2); 

    cout<<"Address of obj1 is " <<&obj1<<"\n";
    obj1.Display(); //dispaly (&obj1);
                    //display (100);


    cout<<"Address of obj2 is "<<&obj2<<"\n";
    obj2.Display();    //Dispaly (&obj2);
                      //display (200);                 


      return 0;   
}