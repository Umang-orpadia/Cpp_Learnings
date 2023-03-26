#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
{
 clrscr();
 char arr[100];
 cin.getline(arr,100);

 ofstream myfile("demo1.txt");
 myfile<<arr;
 myfile.close();
 cout<<"File written operation successfully"<<endl<<endl;
 cout<<"Reading from file operation started"<< endl;
 char arr1[100];
 ifstream obj("demo1.txt");
 obj.getline(arr1,100);
 cout<<"Array content"<<arr1<<endl;
 cout<<"File read operation completed"<<endl;

 getch();
 return 0;
}