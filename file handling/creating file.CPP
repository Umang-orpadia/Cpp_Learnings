#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
{
 clrscr();
 fstream FileName;
 FileName.open("demo.txt",ios::out);
 if(!FileName)
 {
  cout<<"Error creating a file"<<endl;
 }
 else
 {
  cout<<"File created sucessfully";
  FileName.close();
 }
 getch();
 return 0;
}