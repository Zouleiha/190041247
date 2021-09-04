#include <iostream>
#include <string>
using namespace std;

enum Material {Wood,Board,Steel};
enum Productname {bed,sofa,diningTable,kitchen};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
    Productname pn;
public:

    Furniture(Productname P,double p,double d,Material m):price(0),discount(0),madeof(Wood),pn(bed)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setPn(P);
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

    void setPn(Productname val)
    {
        pn=val;
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

    string getPn()
    {
        if(pn==bed)
            return string("Bed");
        else if(pn==sofa)
            return string("Sofa");
        else if(pn==diningTable)
            return string("DiningTable");
         else if(pn==kitchen)
            return string("Kitchen");

        else
            return string("");
    }

 virtual void productDetails()=0;
};

// =======Bed Class

enum BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
protected:
    BedSize bs;
public:
    Bed(Productname P,double p,double d,Material m, BedSize bs):Furniture(P, p,d,m),bs(Single)
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

        cout<<"Product Name: "<<getPn()<<endl;
        cout<<" Price:"<<price<<endl;
        cout <<"Discount:"<<discount<<endl;
       cout <<"Material:"<<getMadeof()<<endl;
       cout<< "Bed Size: "<<getbedsize()<<endl;
    }
};

//======Sofa

enum SeatNumber  {One, Two, Three, Four, Five}
class Sofa:public Furniture
{
protected:
    SeatNumber sn;
public:
    Sofa(Productname P,double p,double d,Material m,SeatNumber s):Furniture(P,p,d,m),sn(s)
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
    {
        cout<<"Product Name: "<<getPn()<<endl;
        cout<<" Price:"<<price<<endl;
        cout <<"Discount:"<<discount<<endl;
       cout <<"Material:"<<getMadeof()<<endl;
       cout<< "Seat Number: "<<getseatnum()<<endl;
    }


};

//=====dinning table
enum  ChairCount{two,four,six};
class DiningTable : public Furniture
{

protected:
    ChairCount ch;
public:
    DiningTable(Productname P,double p,double d,Material m,ChairCount c): Furniture(P,p, d,m),ch(c){}
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
        cout<<"ProductName: "<<getPn()<<endl;
        cout<<" Price:"<<price<<endl;
        cout <<"Discount:"<<discount<<endl;
       cout <<"Material:"<<getMadeof()<<endl;
       cout<< "ChairCount: "<<getchairCount()<<endl;
    }

    };


enum Kitchentype{modern, traditional, semi_modern};
enum kitchencolor{white, red, green};

class Kitchen: public Furniture
{
protected:
    Kitchentype kt;
    kitchencolor kc;
public:
     Kitchen(Productname P,double p,double d,Material m,Kitchentype t,kitchencolor c): Furniture(P,p, d,m),kt(t),kc(c){}


    string getKt()
{

        if(kt==modern)
            return string("Modern");
        else if(kt==traditional)
            return string("Traditional");
        else if(kt==semi_modern)
            return string("Semi-Modern");
}
   string getKc()
{

        if(kc==red)
            return string("Red");
        else if(kc==green)
            return string("Green");
        else if(kc==white)
            return string("White");
}


  void productDetails()
    {

        cout<<"ProductName: "<<getPn()<<endl<<" Price:"<<price<<endl <<"Discount:"<<discount<<endl;
       cout <<"Material:"<<getMadeof()<<endl<< "Kitchencolor: "<<getKc()<<endl <<"Kitchentype: "<<getKt()<<endl;
    }
};

int main()
{

    Furniture* f_list[100];


    f_list[0] = new Bed(bed,10000,123,Wood,Single);
    f_list[1] = new Sofa(sofa,11000,234,Steel,one);
   f_list[2] = new DiningTable(diningTable,13000,345,Wood,Two);
    f_list[3] = new Kitchen(kitchen,1234,543,Board,modern,red);
    //PProductname P,double p,double d,Material m,Kitchentype t,kitchencolor c


    for(int i=0;i<4;i++)
    {
        f_list[i]->productDetails();
           cout<<endl;
    }

}

