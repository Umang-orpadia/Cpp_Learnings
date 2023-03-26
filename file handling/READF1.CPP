#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
clrscr();
fstream file;
file.open("demo1.txt",ios::in);
if(!file)
{
cout<<"error";
}
else
{
char x;
while(1)
{
file>>x;
if(file.eof())
break;
cout<<x;
}
}
file.close();
getch();
return 0;
}