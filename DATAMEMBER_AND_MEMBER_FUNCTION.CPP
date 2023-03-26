#include<iostream.h>
#include<conio.h>

class add
{
  public:
  int a,b,c;
  void input()
  {
   cout<<"\nEnter first no : ";
   cin>>a;
   cout<<"\nEnter second number : ";
   cin>>b;
  }
  void sum()
  {
   c=a+b;
  }
  void show()
  {
   cout<<"\nSum of two digits are : "<<c;
  }
};
void main()
{
 clrscr();
 add obj , obj2;
 obj.input();
 obj.sum();
 obj.show();
 obj2.input();
 obj2.sum();
 obj2.show();
 getch();
}
