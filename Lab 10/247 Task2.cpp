#include<iostream>

using namespace std;

class School
{
   public :
   School() // constructor
   {

   }
   School(const School &s) // copy constructor
   {

   }
    School& operator = (const School &s) // assignment operator
    {
        return *this;
    }
};

int main()
{
   School s1, s2;
   s2.operator=(s1);
   School s3(s1);
   getchar();
   return 0;
}
