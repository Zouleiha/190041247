#include<stdio.h>
#include<iostream>

using namespace std;

class Calculator{

 private :
      int a;
  public :

    Calculator ()
   {
       a = 0;
   }
    Calculator (int val)
{
    a = val;
}
      void add(int value)
      {
          a = a + value;
      }
      void subtract(int value)
      {
          a = a - value;
      }
      void multiply(int value)
      {
          a = a * value;
      }
      void divideBy(int value)
      {
          if (value == 0)
          {
              printf("Error : divided by 0 is undefined");
          }
          else
          {
              a = a / value;
          }
      }
      void clear()
      {
         a = 0;
         cout <<"\nCalculator object is destroyed ";
      }
      void display()
      {
         cout<<"\nCalculator display : "<< a << endl;
      }
      ~Calculator()
      {

      }
};
int main()
{
  Calculator Cal;
  Cal.add(10);
  Cal.display();
  Cal.add(7);
  Cal.display();
  Cal.multiply(31);
  Cal.display();
  Cal.subtract(42);
  Cal.display();
  Cal.divideBy(7);
  Cal.display();
  Cal.divideBy(0);
  Cal.display();
  Cal.add(3);
  Cal.display();
  Cal.subtract(1);
  Cal.display();
  Cal.clear();
  Cal.display();
}
