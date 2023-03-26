#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
{
clrscr();
 fstream FileName;
 FileName.open("demo1.txt",ios::out);
 if(!FileName)
 {
  cout<<"FIle creation error";
 }
 else
 {
  cout<<"File wirtten sucessfully";
  FileName<<"Hello Guys\nWhat is the whether there ,everthin allright??\n";
  FileName.close();
 }
 getch();
 return 0;
}