#include<cstring>
#include<cstdlib>
#include<iostream>

using namespace std;

class Member{
private:
    int flightNumber;
    string destination;
    float distance;
    float MaxFuelCapacity;
    float CalFuel()
    {
        if(distance<=1000)
            return 500;
        else if(distance<=2000)
            return 1100;
        else
            return 2200;
    }
public:
    void FeedInfo(int num,string dest,float dist,float maxfuel)
    {
        flightNumber = num;
        destination = dest;
        distance = dist;
        MaxFuelCapacity = maxfuel;
    }
    void ShowInfo()
    {
        cout<<"\nFlight number: " << flightNumber << endl;
        cout<<"Destination: " << destination << endl;
        cout<<"Distance: " << distance << endl;
        cout<<"Max fuel capacity" << MaxFuelCapacity << endl;
        if(MaxFuelCapacity>=CalFuel())
            cout<<"Fuel capacity is fit for this flight"<<endl;
        else
            cout<<"Not sufficient fuel Capacity for this flight"<<endl;
    }

};

int main()
{
    Member m;

    m.FeedInfo(287,"Place",100.2,2500);
    m.ShowInfo();
    m.FeedInfo(287,"Dhaka",100.2,165.3);
    m.ShowInfo();
}
