#include <iostream>
#include <string>
using namespace std;

 enum Material {Wood,Board,Steel};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
public:

    Furniture(double p,double d,Material m):price(0),discount(0),madeof(Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    string getMadeof()
    {
        if(madeof==Wood)
            return string("Wood");
        else if(madeof==Board)
            return string("Board");
        else if(madeof==Steel)
            return string("Steel");
        else
            return string("");
    }
    virtual void productDetails()=0;
};

//===bed==

enum BedSize {Single,SemiDouble,Double};
class Bed : public Furniture
{
protected:
    BedSize bs;
public:
    Bed(double p,double d,Material m, BedSize b):Furniture(p,d,m),bs(Single)
    {

    }

    string getbedsize()
    {
        if(bs==Single)
            return string("Single");
        else if(bs==SemiDouble)
            return string("SemiDouble");
        else if(bs==Double)
            return string("Double");
        else
            return string("");
    }

 void productDetails()
    {
        cout<<" Regular Price:"<<price <<endl;
        cout <<"Discounted Price:"<<discount <<endl;
       cout <<"Material:"<<getMadeof() <<endl;
       cout<< "Bed Size: "<<getbedsize() <<endl <<"\n";
    }

};

//=====sofa=====

enum SeatNumber {One, Two, Three, Four, Five};
class Sofa : public Furniture
{
protected:
    SeatNumber sn;
public:
    Sofa(double p,double d,Material m, SeatNumber s):Furniture(p,d,m),sn(s)
    {

    }
string getseatnum()
    {
        if(sn==One)
            return string("One");
        else if(sn==Two)
            return string("Two");
        else if(sn==Three)
            return string("Three");
       else if(sn==Four)
            return string("Four");
       else if(sn==Five)
            return string("Five");
       else
            return string("");

    }
       void productDetails()
    {
        cout<<" Price:"<<price  <<endl;
        cout <<"Discounted:"<<discount <<endl;
       cout <<"Material:"<<getMadeof() <<endl;
       cout<< "Seat Number: "<<getseatnum() <<endl <<"\n";
    }
};

// chair====

enum  ChairCount{two,four,six};
class DiningTable : public Furniture

{
protected:
    ChairCount ch;
public:
    DiningTable(double p,double d,Material m, ChairCount c): Furniture(p, d,m),ch(c){}
     string getchairCount()
    {
        if(ch==two)
            return string("two");
        else if(ch==four)
            return string("four");
        else if(ch==six)
            return string("six");
        else
            return string("");
    }

  void productDetails()
    {
        cout<<"Regular Price:"<<price  <<endl;
        cout <<"Discounted Price:"<<discount <<endl;
       cout <<"Material:"<<getMadeof() <<endl;
       cout << "ChairCount: "<<getchairCount() <<endl;
    }

};

int main()
{
    Furniture* f_list[100];



    f_list[0] = new Bed(10000,9877,Wood,Single);
    f_list[1] = new Sofa(10000,9,Steel,Five);
    f_list[2] = new DiningTable(13000,345,Wood,six);



    for(int i=0;i<3;i++)
    {
        f_list[i]->productDetails();
    }
}
