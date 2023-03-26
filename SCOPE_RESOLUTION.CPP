#include<iostream.h>
#include<conio.h>

int x=5;
int main()
{
 clrscr();
 int x=10;
 cout<<"The local value of x is : "<<x;
 cout<<"\nThe global value of x is : "<<::x ;
 getch();
 return 0;
}
