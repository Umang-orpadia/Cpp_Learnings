#include<iostream.h>
#include<conio.h>

class A
{
  int a;
  public:
  void setData(int a)
  {
   this->a=a;
  }
  void getData()
  {
   cout<<"The value of a is : "<<a<<endl;
  }
};
int main()
{
 clrscr();
 A  a;
 a.setData(4);
 a.getData();
 getch();
 return 0;
}