#include<iostream>

using namespace std;

class RationalNumber {

private:
    int numerator, denominator;
public:
    void assign (int num, int denom)
    {
         if(numerator==0)
       {
           cout << "maths error";
           return;
       }
       numerator = num;
       denominator = denom;
    }
    double convert()
    {
        double fract;
        fract = numerator/denominator;
        return fract;
    }
    void invert()
    {
       int x = 0;
       x = numerator;
       numerator = denominator;
       denominator = x;
    }
    void print()
    {
        cout <<"The Rational Number is " << numerator<< "/" << denominator;
    }
};
int main()
{
  RationalNumber r;
  r.assign(22,7);
  r.print();
}
