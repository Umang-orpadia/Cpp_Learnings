#include<iostream.h>
#include<conio.h>

class cars
{
  private:
  float milage;
  double price;
  public:
  cars()
  {
   cout<<"constructor called\n";
  }
  cars(float m,double p)
  {
  cout<<"Parameterised constructor called"<<endl;
   milage=m;
   price=p;
  }
  cars(cars &obj)
  {
   cout<<"Copy contructor called"<<endl;
   milage=obj.milage;
   price=obj.price;
  }
  void setData(float m,double p)
  {
   milage=m;
   price=p;
  }
  void displayData()
  {
   cout<<"car properties\n";
   cout<<"Car milage: "<<milage<<endl;
   cout<<"Car price: "<<price<<endl<<endl;
  }
  ~cars()
  {
   cout<<"\nDestructor called";
  }
};

int main()
{
 clrscr();
 cars car1,car2(10,2000000);
 car1.setData(14.9,150000);
 car1.displayData();
 car2.displayData();

 cars car3=car1;
 car3.displayData();
 getch();
 return 0;
}
