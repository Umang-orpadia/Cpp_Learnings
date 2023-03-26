#include<iostream.h>
#include<conio.h>

class base
{
  public:
  void print()
  {
   cout<<"\nThis is base class\n";
  }
};

class derived :public base
{
public:
  void print()
  {
   cout<<"\nThis is derived class\n";
   base::print();
  }

};
int main()
{
 clrscr();
 derived obj;
 obj.print();
 getch();
 return 0;
}