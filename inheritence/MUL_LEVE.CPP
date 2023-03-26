#include<iostream.h>
#include<conio.h>

class student
{
  public:
  int rno;
  char name[20];

};

class marks : public student
{
 public:
 int m1,m2;

};
class result: public marks
{
  public:
  int result;
  void get()
  {
   cout<<"\nEnter roll no: ";
   cin>>rno;
   cout<<"\n\nEnter name: ";
   cin>>name;
   cout<<"\nEnter Marks 1 and Marks 2: ";
   cin>>m1>>m2;
  }
  void calculation()
  {
   result =m1+m2;
  }
  void display()
  {
   cout<<"\n\n Name: "<<name;
   cout<<"\nroll no: "<<rno;
   cout<<"\nMarks 1: "<<m1;
   cout<<"\nMarks 2: "<<m2;
   cout<<"\nResult : "<<result;
  }
};
int main()
{
 clrscr();
 result r;
 r.get();
 r.calculation();
 r.display();
 getch();
 return 0;
}