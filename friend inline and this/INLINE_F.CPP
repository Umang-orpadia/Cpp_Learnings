#include<iostream.h>
#include<conio.h>

inline int product(int a,int b)
{
 return a*b;
}

int main()
{
 clrscr();
 int a,b;
 cout<<"Enter a value for a and b: "<<endl;
 cin>>a>>b;
 cout<<"\nThe value for a and b is "<<product(a,b)<<endl;
 getch();
 return 0;
}