#include<iostream.h>
#include<conio.h>

class A
{
 public:
 int a;
 void show()
 {
  a=10;
  cout<<"Inside class: "<<a<<endl;
 }

};

int main()
{
  clrscr();
  A obj;
  obj.show();
  obj.a=20;
  cout<<"Outside class: "<<obj.a;
  getch();
  return 0;
}