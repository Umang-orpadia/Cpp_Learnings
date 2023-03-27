#include<iostream.h>
#include<conio.h>

class base
{
  int a,b;
  public:
  void input()
  {
   cout<<"Base class"<<endl;
   cout<<"Enter value of a and b: "<<endl;
   cin>>a>>b;
  }
  void display()
  {
   cout<<"Addition of a and b : "<<a+b<<endl;
  }

};
class derived1 :public base
{
  int n1;
  public:
  void input1()
  {
   cout<<"Derived class 1"<<endl;
   cout<<"Enter value of n1"<<endl;
   cin>>n1;
  }
  void display1()
  {
   cout<<"n1 is : "<<n1<<endl<<endl;
  }
};
class derived2:public base
{
  int n2;
  public:
  void input2()
  {
   cout<<"Derived class 2"<<endl;
   cout<<"Enter value for n2: "<<endl;
   cin>>n2;
  }
  void display2()
  {
   cout<<"n2 is: "<<n2<<endl<<endl;
  }
};

void main()
{
 clrscr();
 derived1 d1;
 derived2 d2;

 cout<<"Accessing member of base class through derived class 1"<<endl;
 d1.input();
 d1.display();

 cout<<"Accessing member of base class through derived class 2"<<endl;
 d2.input();
 d2.display();

 cout<<"Accessing member of derived class 1"<<endl;
 d1.input1();
 d1.display1();

 cout<<"Accessing member of derived class 2"<<endl;
 d2.input2();
 d2.display2();

 getch();
}