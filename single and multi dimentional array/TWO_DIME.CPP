#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();
 int numbers[2][3];
 cout<<"Enter 6 numbers: "<<endl;
 for(int i=0;i<2;i++)
 {
  for(int j=0;j<3;j++)
  {
   cin>>numbers[i][j];
  }
 }
 cout<<"Numbers are: "<<endl;
 for(int k=0;k<2;k++)
 {
  for(int l=0;l<3;l++)
  {
   cout<<"Numbers is ["<<k<<"]["<<l<<"]"<<numbers[k][l]<<endl;
  }
 }
 getch();
 return 0;
}