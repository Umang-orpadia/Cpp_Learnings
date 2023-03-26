#include<iostream.h>
#include<conio.h>

class base1
{
int a,b,c;
  public:
  void getData1()
  {
   cout<<"\nBase class 1"<<endl;
   cout<<"\nEnter value for a&b: "<<endl;
   cin>>a>>b;
  }
  void displayData1()
  {
   c=a+b;
   cout<<"\nAddition of a + b is: "<<c<<endl;
  }
};

class base2
{
  int a,b,c;
  public:
  void getData2()
  {
   cout<<"\nBase class 2";
   cout<<"\nEnter value of a and b"<<endl;
   cin>>a>>b;
  }
  void displayData2()
  {
   c=a-b;
   cout<<"\nSubtraction of a-b is : "<<c<<endl;
  }
};
class derived :public base1 ,public base2
{
  int a,b,c;
  public :
  void getData3()
  {
   cout<<"\nDerived class" <<endl;
   cout<<"\nEnter value for a and b"<<endl;
   cin>>a>>b;
  }
  void displayData3()
  {
  c=a*b;
   cout<<"\nMultiplication of a and b is : "<<c<<endl;
  }
};
int main()
{
 clrscr();
 derived d1;

 d1.getData1();
 d1.displayData1();

 d1.getData2();
 d1.displayData2();

 d1.getData3();
 d1.displayData3();
 getch();
return 0;
}