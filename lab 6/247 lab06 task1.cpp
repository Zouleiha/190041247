#include<iostream>

using namespace std;

class Counter
{
private:
    int count, incrementstepvalue;

public:
    Counter()
    {
        count=0;
    }
    void setIncrementStep(int step_val)
{
    incrementstepvalue = step_val;
}
    void resetCount()
{
    count=0;
}
    void increment()
{
    count = count + incrementstepvalue;
}
    int get_count()
{
    return count;
}
    Counter operator+(Counter c1)
    {
        Counter temp;
        temp.count = count + c1.count;
        if(incrementstepvalue<c1.incrementstepvalue)
            temp.incrementstepvalue = incrementstepvalue;
        else
            temp.incrementstepvalue = c1.incrementstepvalue;
        return temp;
    }

friend Counter operator+(Counter c1,int var)
{
    Counter temp;
        temp.count = c1.count + var;
        temp.incrementstepvalue = c1.incrementstepvalue;
        return temp;
}
friend Counter operator+(int var, Counter c1)
{
    Counter temp;
        temp.count = c1.count + var;
        temp.incrementstepvalue = c1.incrementstepvalue;
        return temp;
}
  void operator+=(Counter c1)
{
    count = count + c1.count;
}
 Counter operator++() // prefix
  {
    Counter temp;
    temp.count = count + incrementstepvalue;
    count = count + incrementstepvalue;
    temp.incrementstepvalue = incrementstepvalue;
    return temp;
  }
  Counter operator++(int) // postfix
  {
    Counter temp;
    temp.count = count + incrementstepvalue;
    count = count + incrementstepvalue;
    temp.incrementstepvalue = incrementstepvalue;
    return temp;  }
};

int main()
{
   Counter c1,c2,c3;
   int var=8;
   c1.setIncrementStep(2);
   c1++;
   c2.setIncrementStep(3);
   c2++;
   c3.setIncrementStep(5);
   c3++;
   cout<<"c1 is "<<c1.get_count()<<endl;
   cout<<"c2 is "<<c2.get_count()<<endl;
   cout<<"c3 is "<<c3.get_count()<<endl;

   c1 = c2 + c3;
    cout<<"c1 = c2 + c3 is "<<c1.get_count()<<endl;
   c1 = c2 + var;
    cout<<"c1 = c2 + var is "<<c1.get_count()<<endl;
   c1 = var + c2;
    cout<<"c1 = var + c2 is "<<c1.get_count()<<endl;
   c1 += c2;
    cout<<"c1 += c2 is "<<c1.get_count()<<endl;
   c1 = ++c2;
    cout<<"++c2 is "<<c2.get_count()<<endl;
   c1 = c2++;
    cout<<"c2++ is "<<c2.get_count()<<endl;

}
