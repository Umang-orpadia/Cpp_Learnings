#include<iostream.h>
#include<conio.h>

class employee
{
  int id;
  public:
  void setid()
  {
   cout<<"\nEnter employee id : ";
   cin>>id;
  }
  void getid()
  {
   cout<<"\nEmployeee id is : "<<id<<endl;
  }
};

void main()
{
 clrscr();
 employee IT[5];
 for(int i=1;i<=5;i++)
 {
  IT[i].setid();
  IT[i].getid();
 }
 getch();
}