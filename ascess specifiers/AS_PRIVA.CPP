#include<iostream.h>
#include<conio.h>

class A
{
 private:
 int a,b;

 public:
 void show()
 {
  a=10;b=20;
  cout<<"A is : "<<a<<endl<<"B is : "<<b<<endl;
 }
 friend class B;
};
class B
{
  public:
  void disp(A ref)
  {
   ref.a=30;
   ref.b=40;
   cout<<"A is : "<<ref.a<<endl<<"B is : "<<ref.b<<endl;
  }
};
int main()
{
 clrscr();
 A obj; B obj2;
 obj.show();
 obj2.disp(obj);
 getch();
 return 0;
}