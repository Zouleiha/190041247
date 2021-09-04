#include <iostream>

using namespace std;

class Shop
{
   public :
   virtual void buy()
    {
        cout<<"shoes" << endl;
    }
};

class Seller : public Shop
{
public :
    void buy()
    {
        cout<<"sold"<<endl;
    }
};

int main()
{
    Shop *s1;
    Seller s2;
    s1 = &s2;
    s1 -> buy();
    return 0;
}
