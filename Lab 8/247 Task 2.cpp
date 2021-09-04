#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class Car
{
    public :
       void maximum_acceleration()
       {

       }
        void fuel_capacity()
        {

        }
        void display()
        {

        }

};
class seat : public Car
{
        string comfortability;
        float prs_seat_warmer;
     public :
          seat(string comf, float psw)
          {
              comfortability = comf;
              prs_seat_warmer = psw;
          }
};
class Wheel : public Car
{
    float circumference;
    public :
        Wheel(float cir)
        {
            circumference = cir;
        }
};
class Engine : public Car
{
    float Max_fuel_consumption_rate;
    float Max_energy_prod_rate;
    float Average_RPM;
    public :
        Engine(float MFCR, float MEPR, float ARPM)
        {
             Max_fuel_consumption_rate = MFCR;
             Max_energy_prod_rate = MEPR;
             Average_RPM = ARPM;
        }
};
class door : public Car
{
    int openingmode;
    public :
        door(int Open)
        {
            openingmode = Open;
        }
};


int main()
{
    Car C;
    C.display();
}
