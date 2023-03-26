#include<iostream.h>
#include<conio.h>

class shape
{
  protected:
  int width;
  int height;
  public:
  void setWidth(int w)
  {
   width = w;
  }
  void setHeight(int h)
  {
   height = h;
  }
};
class rectangle :public shape
{
  public:
  int getArea()
  {
   return (width * height);
  }
};

int main()
{
 clrscr();
 rectangle rect;
 rect.setWidth(5);
 rect.setHeight(6);

 cout<<"Total area: "<<rect.getArea()<<endl;
 getch();
 return 0;
}