#include<iostream.h>
#include<conio.h>

class print
{
public:
 void show()
 {
  cout<<"\nHello world\n";
 }
};

void main()
{
 clrscr();

 print obj;
 int i=1;
 do
 {
 obj.show();
 i++;

 }
 while(i<=5);
 getch();
}