#include<iostream.h>
#include<conio.h>
#include<fstream.h>
	  //file pehele save karlo output screen freez hone ke chances hai.
int main()
{
 clrscr();
 fstream FileName;
 FileName.open("demo1.txt",ios::in);
 if(!FileName)
 {
  cout<<"File doesnot exist";
 }
 else
 {
  char x;
  FileName >>x;
  while(1)
  {
   if(FileName.eof())
   break;
  }
 }
 FileName.close();
 getch();
 return 0;
}