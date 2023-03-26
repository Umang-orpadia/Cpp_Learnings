#include<iostream.h>
#include<conio.h>

class base
{
  protected:
  int a,b;
  public:
  void show()
  {
   a=10;b=20;
   cout<<a<<"   "<<b<<endl;
  }
};
class Derived:public base
{
  public :
  void disp()
  {
   a=30; b=40;
   cout<<a<<"   "<<b<<endl;

  }
};
int main()
{
 clrscr();
 Derived obj;
 obj.disp();
 obj.show();
 getch();
 return 0;
}