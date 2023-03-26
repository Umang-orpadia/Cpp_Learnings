#include<iostream.h>
#include<conio.h>

int add(int a,int b)      //fun1
{
 cout<<"Function 1"<<endl;
 return a+b;
}

double add(double a,double b)      //fun2
{
 cout<<"Function 2"<<endl;
 return a+b;
}

int add(int a,int b,int c)      //fun3
{
 cout<<"Function 3"<<endl;
 return a+b+c;
}

double add(int a,double b)      //fun4
{
 cout<<"Function 4"<<endl;
 return a+b;
}

double add(double a,int b)      //fun5
{
 cout<<"Function 5"<<endl;
 return a+b;
}

int main()
{
 clrscr();
 cout<<"Addition is : "<<add(1,2)<<endl;//1
 cout<<"Addition is : "<<add(3.5,3.5)<<endl;//2
 cout<<"Addition is : "<<add(1,2,3)<<endl;//3
 cout<<"Addition is : "<<add(3.5,2)<<endl;//4
 cout<<"Addition is : "<<add(1,3.5)<<endl;//5
 getch();
 return 0;
}